from django.urls import path
from . import views


urlpatterns = [path("", views.ListListView.as_view(), name="index")]
