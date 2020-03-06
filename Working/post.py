import requests
myobj = {
    "key": "value"
}
x = requests.post('http://192.168.8.101:5000/findGoal' ,json=myobj)
