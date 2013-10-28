Conjectur-SDK
=============

Integrating the SDK

1: If you have not done so already, download the SDK from https://github.com/Conjectur/Conjectur-SDK/.

2: Drag and drop ConjecturSDK.h and lib.ConjecturSDK.a into your project's SDK directory, or wherever you have chosen to store such files. If this is the first SDK you are including, you may have to create this directory.  When prompted, select "copy files to project folder."  Linked files outside of the project folder may not compile.

![Place ConjecturSDk.h and lib.ConjecturSDK.a within the project directory](http://conjectur.com/images/SDK/01.png)

3: Using the navigator, open your application's plist file, and add a new URL Scheme with the unlock URL your account representative has provided for you.

![Add the SDK and your unique unlock URL to your applications' plist.](http://conjectur.com/images/SDK/02.png)

4: Modify the ConjecturSDK.h file with your campaign token and api_key provided by your account representative.  Also be sure to modify "appname" and "appid" with your itunes appname and id.

![All 4 lines should be modified to show your unique information.](http://conjectur.com/images/SDK/03.png)

5: Add #import "conjectursdk.h" to the top of your main applicationdelegate.m, and add the ConjecturSDK trackLaunch code to your application didFinishLaunching function.

![Import conecjturSDK.h and add the trackLaunch code to the didFinishLaunching function.](http://conjectur.com/images/SDK/04.png)

6: Open project setting by selecting the project in xcode and selecting your target.  Scroll down to "linked frameworks and libraries", and click the plus sign. Select libConjecturSDK.a from the list of available libraries.

![Add libConjecturSDK.a to your linked frameworks and libraries.](http://conjectur.com/images/SDK/05.png)

7: If you are an unlock partner, add the ConjecturSDK trackUnlock:url code to your application handleOpenURL function in your main applicationdelegate.m file.  Others should ignore this step.

![Unlock partners, add the trackUnlock:url code to your application delegate.](http://conjectur.com/images/SDK/06.png)

You're done!  Conjectur-SDK should be fully integrated.  Feel free to contact your account representative with problems or for additional information.
