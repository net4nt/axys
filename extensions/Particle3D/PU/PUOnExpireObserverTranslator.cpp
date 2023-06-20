/****************************************************************************
 Copyright (C) 2013 Henry van Merode. All rights reserved.
 Copyright (c) 2015-2016 Chukong Technologies Inc.
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 https://axmolengine.github.io/

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "PUOnExpireObserverTranslator.h"
#include "extensions/Particle3D/PU/PUParticleSystem3D.h"
#include "extensions/Particle3D/PU/PUDynamicAttribute.h"
#include "extensions/Particle3D/PU/PUDynamicAttributeTranslator.h"

NS_AX_BEGIN

PUOnExpireObserverTranslator::PUOnExpireObserverTranslator() {}
//-------------------------------------------------------------------------
bool PUOnExpireObserverTranslator::translateChildProperty(PUScriptCompiler* /*compiler*/, PUAbstractNode* /*node*/)
{
    return false;
}

bool PUOnExpireObserverTranslator::translateChildObject(PUScriptCompiler* /*compiler*/, PUAbstractNode* /*node*/)
{
    // No objects
    return false;
}

NS_AX_END