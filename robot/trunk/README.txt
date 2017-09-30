This directory hierarchy contains the robot code for the 2015 Recycle Rush season.  
All source code is found in the src/ directory.

The code structure for this season is the following:

frc2015/
    robot/
        branches/
        tags/
        trunk/
            .cproject
            .project
            .settings/
                language.settings.xml
                org.eclipse.cdt.managedbuilder.core.prefs
            build.properties
            build.xml
            src/
                MainProgram.cpp

The frc2015/ directory is the top-level directory in the SVN repository for this year.
However, you always check out the trunk/ directory (i.e., frc2015/robot/trunk/) into Eclipse.
The files .cproject, .project, language.settings.xml, org.eclipse.cdt.managedbuilder.core.prefs,
build.properties, and build.xml are build-related files.  All source code should go under
the src/ directory, with MainProgram.cpp being the top-level file.