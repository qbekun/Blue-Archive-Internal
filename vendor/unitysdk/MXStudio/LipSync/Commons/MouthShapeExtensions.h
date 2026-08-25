#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class MouthShape; }

#define MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_TOCHAR_OFFSET UNITYSDK_OFFSET(0x9444B70)
#define MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_FROMCHAR_OFFSET UNITYSDK_OFFSET(0x9444C20)
#define MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9444D20)
#define MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_ISBASIC_OFFSET UNITYSDK_OFFSET(0x9445010)
#define MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_TOBASICSHAPE_OFFSET UNITYSDK_OFFSET(0x943A1B0)

namespace MXStudio::LipSync::Commons
{
	inline static constexpr unsigned int MouthShapeExtensions_TypeDefinitionIndex = 36901;

	class MouthShapeExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* allShapes; // 0x0
		Il2CppObject* basicShapes; // 0x8
		Il2CppObject* openShapes; // 0x10

		::System::Char ToChar(::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (::System::Char(*)(::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_TOCHAR_OFFSET))(arg, nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* FromChar(::System::Char arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_FROMCHAR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsBasic(::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (::System::Boolean(*)(::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_ISBASIC_OFFSET))(arg, nullptr);
		}

		::MXStudio::LipSync::Commons::MouthShape* ToBasicShape(::MXStudio::LipSync::Commons::MouthShape* arg)
		{
			return (return (::MXStudio::LipSync::Commons::MouthShape*(*)(::MXStudio::LipSync::Commons::MouthShape*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_MOUTHSHAPEEXTENSIONS_TOBASICSHAPE_OFFSET))(arg, nullptr);
		}

	};
}

