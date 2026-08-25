#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCPATH_GET_ISFLATTENGROUND_OFFSET UNITYSDK_OFFSET(0xDAD310)
#define MXUNDERCOVER_UCPATH_GETSTARTPOINT_OFFSET UNITYSDK_OFFSET(0xDAD320)
#define MXUNDERCOVER_UCPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAD460)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPath_TypeDefinitionIndex = 9911;

	class UCPath : public ::NPA::Editor::Auth::View::NXPAccountLinkPrimaryPlatformGameDataAttributeView
	{
	public:
		::System::Boolean get_isFlattenGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATH_GET_ISFLATTENGROUND_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartPoint()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATH_GETSTARTPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPATH_.CTOR_OFFSET))(nullptr);
		}

	};
}

