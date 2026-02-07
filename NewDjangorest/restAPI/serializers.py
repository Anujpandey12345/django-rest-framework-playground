from rest_framework import serializers
from .models import Stundet
class StudentSerializer(serializers.Serializer):
    name = serializers.CharField(max_length=100)
    age = serializers.IntegerField()
    city = serializers.CharField(max_length=100)


    def create(self, validate_data):
        return Stundet.objects.create(**validate_data)
