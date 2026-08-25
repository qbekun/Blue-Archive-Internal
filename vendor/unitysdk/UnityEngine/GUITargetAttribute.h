#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_GUITARGETATTRIBUTE_GETGUITARGETATTRVALUE_OFFSET UNITYSDK_OFFSET(0xA283F30)

namespace UnityEngine
{
	inline static constexpr unsigned int GUITargetAttribute_TypeDefinitionIndex = 36549;

	class GUITargetAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 displayMask; // 0x10

		::System::Int32 GetGUITargetAttrValue(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUITARGETATTRIBUTE_GETGUITARGETATTRVALUE_OFFSET))(arg, str, nullptr);
		}

	};
}

