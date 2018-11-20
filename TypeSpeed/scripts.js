var a = [],date1,date2;
function fn()
{
          var b = document.getElementById('statement').innerText;
          var l = event.keyCode;
          //alert(l);
          if((l>64 && l<91 || l>96 && l<123)||l==32)
          {
            a.push(event.key);
          }
          //alert(a);
          if(event.keyCode==8)
          {
            a.pop();
          }
          //alert(str);
          var f=0;
          for(var i=0;i<a.length;i++)
            {
              if(a[i]==b[i])
              {
              f=1;
              }
              else {
                f=0;break;
                }
          }
          if(f==1)
          {
            document.getElementById('ip').style.color="green";
          }
          else {
            document.getElementById('ip').style.color="red";
          }
}
function startfn()
{
          date1 = Date.now();

}
function show()
{
          var date = Date.now();
          var e = (date-date1)/1000
          document.getElementById('sh').innerHTML = e;
}
  show();
function stopfn ()
{
          date2 = Date.now();
          var e = date2 - date1;
          var ele = e/1000;
          var ha = (42/ele).toFixed(2);
          document.getElementById('result').innerHTML = ha + " Characters per second!";
}
