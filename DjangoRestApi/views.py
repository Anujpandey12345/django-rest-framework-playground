from django.shortcuts import render
from .models import Student
from .serializers import StudentSerializer
from rest_framework.renderers import JSONRenderer
from django.http import HttpResponse
# Create your views here.



def Student_detail(request, pk):
    stu = Student.objects.get(id = pk)
    # print(f"This is STU{stu}")
    serializer = StudentSerializer(stu)
    # print(f"This is Serializer{serializer}")
    json_data = JSONRenderer().render(serializer.data)
    # print(f"This is json_data{json_data}")
    return HttpResponse(json_data, content_type = 'application/json')




# Query Set -> All students Data


def Student_list(reques):
    stu = Student.objects.all()
    # print(f"This is STU{stu}")
    serializer = StudentSerializer(stu, many = True)
    # print(f"This is Serializer{serializer}")
    json_data = JSONRenderer().render(serializer.data)
    # print(f"This is json_data{json_data}")
    return HttpResponse(json_data, content_type = 'application/json')