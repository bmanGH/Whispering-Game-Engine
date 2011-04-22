//
//  Shader.fsh
//  Whispering
//
//  Created by jerry lin on 11/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
