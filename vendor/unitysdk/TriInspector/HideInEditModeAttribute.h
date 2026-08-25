#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_HIDEINEDITMODEATTRIBUTE_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCEEA0)
#define TRIINSPECTOR_HIDEINEDITMODEATTRIBUTE_SET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCEEB0)
#define TRIINSPECTOR_HIDEINEDITMODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEEC0)

namespace TriInspector
{
	inline static constexpr unsigned int HideInEditModeAttribute_TypeDefinitionIndex = 37832;

	class HideInEditModeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _Inverse_k__BackingField; // 0x10

		::System::Boolean get_Inverse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEINEDITMODEATTRIBUTE_GET_INVERSE_OFFSET))(nullptr);
		}

		::System::Void set_Inverse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEINEDITMODEATTRIBUTE_SET_INVERSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEINEDITMODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

