Conjectur-SDK
=============

### Before You Begin

If you have not done so already, download the SDK from
[our Github page](https://github.com/Conjectur/Conjectur-SDK/) ([https://github.com/Conjectur/Conjectur-SDK/](https://github.com/Conjectur/Conjectur-SDK/)).

### Importing Conjectur-SDK files

- Drag and drop ConjecturSDK.h, ConjecturSDK.plist, and libConjecturSDK.a into your project's SDK directory, or wherever you have chosen to store such files.  If this is the first SDK you are including, you may have to create this directory.

- When prompted, select "copy files to project folder." Linked files outside of the project folder may not compile.

![](http://images.conjectur.com/documentation/Conjectur-SDK/020_drag-drop.png)

![](http://images.conjectur.com/documentation/Conjectur-SDK/022_confirmation.png)

### Customize the Conjectur-SDK Property List

- Enter the CampaignToken and APIKey provided by your account representative.

- Also be sure to modify "AppName" and "iTunesID" with your itunes appname and id.

Or use the already customized ConjecturSDK.plist your account representative provided for you.

![](http://images.conjectur.com/documentation/Conjectur-SDK/030_plist.png)

### Customize the Application Delegate

- Add the following code to the top of your main AppDelegate.m:
    ```objective-c
    #import "ConjecturSDK.h"
    ```

- Then add the following code to your application didFinishLaunching function:
    ```objective-c
    [ConjecturSDK trackLaunch]
    ```

![](http://images.conjectur.com/documentation/Conjectur-SDK/040_appDelegate.png)

### Enable the Conjectur-SDK Library

- Open project setting by selecting the project in Xcode, and selecting your target. Scroll down to "linked frameworks and libraries."  You should already see libConjecturSDK.a listed as required.

If you do not see it there,

- click the + sign

- select "Add Other..."

- browse for the libConjecturSDK.a file and select it.

- Verify that the library appears in the list.

![](http://images.conjectur.com/documentation/Conjectur-SDK/050_addLib.png)
![](http://images.conjectur.com/documentation/Conjectur-SDK/051_addLibOther.png)
![](http://images.conjectur.com/documentation/Conjectur-SDK/052_addLibBrowse.png)
![](http://images.conjectur.com/documentation/Conjectur-SDK/053_addedLib.png)

### Setup for Unlock Partners

If you are an Unlock Partner, you will need to make two additional modifications.

- Using the navigator, open your application's plist file, and add a new URL Scheme with the unlock URL your account representative has provided for you.

![](http://images.conjectur.com/documentation/Conjectur-SDK/071_UrlScheme.png)

- Then add the following code to your application handleOpenURL function in your main applicationdelegate.m file

    ```objective-c
    - (BOOL)application:(UIApplication *)application
                openURL:(NSURL *)url
      sourceApplication:(NSString *)sourceApplication
             annotation:(id)annotation
    {
        [ConjecturSDK trackUnlock:url];

        return YES;
    }
    ```

### You're done!

The Conjectur-SDK should be fully integrated.

Feel free to contact your account representative with problems or for additional information.
