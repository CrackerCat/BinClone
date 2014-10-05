//******************************************************************************//
// Copyright 2014 Concordia University											//
//																				//		
// Licensed under the Apache License, Version 2.0 (the "License");				//
// you may not use this file except in compliance with the License.				//
// You may obtain a copy of the License at										//
//																				//
//    http://www.apache.org/licenses/LICENSE-2.0								//
//																				//
// Unless required by applicable law or agreed to in writing, software			//
// distributed under the License is distributed on an "AS IS" BASIS,			//
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.		//
// See the License for the specific language governing permissions and			//
// limitations under the License.												//
//******************************************************************************//

// BFFileHelper.h: interface for the File Helper classes
//
//////////////////////////////////////////////////////////////////////

#if !defined(BFDATEHELPER_H)
#define BFDATEHELPER_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//--------------------------------------------------------------------
//--------------------------------------------------------------------

class CBFDateHelper
{
public:
    CBFDateHelper(void);
    virtual ~CBFDateHelper(void);

    static bool strToTime(LPCTSTR str, COleDateTime& res);
    static bool strToTimeSpan(LPCTSTR str, COleDateTimeSpan& res);
};

#endif // !defined(BFDATEHELPER_H)