# cdn_detector
Simple detection if domain is in CDN. Program asks few DNS servers from all over the world and looks for difference in answers.
After receiving list of addresses they are compared for current and previous check for single domain. 

We may have 3 cases : 
* Two completely separated lists of A answers   -> definetely CDN
* Two lists where bigger contains other fully   -> distributed domain
* Two lists contains each other partially       -> mixed : distributed + CDN

Those CDN cases are now detected.

Domain are read from .txt file.

DNS Servers are read from .txt file. 

Remark : They have to be recursive servers!
