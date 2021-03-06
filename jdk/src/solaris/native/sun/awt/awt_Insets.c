/*
 * Copyright (c) 1998, 2014, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

#include "java_awt_Insets.h"
#include "jni_util.h"

#include "awt_Insets.h"

struct InsetsIDs insetsIDs;


JNIEXPORT void JNICALL
Java_java_awt_Insets_initIDs(JNIEnv *env, jclass cls)
{
    CHECK_NULL(insetsIDs.top = (*env)->GetFieldID(env, cls, "top", "I"));
    CHECK_NULL(insetsIDs.bottom = (*env)->GetFieldID(env, cls, "bottom", "I"));
    CHECK_NULL(insetsIDs.left = (*env)->GetFieldID(env, cls, "left", "I"));
    CHECK_NULL(insetsIDs.right = (*env)->GetFieldID(env, cls, "right", "I"));
}
