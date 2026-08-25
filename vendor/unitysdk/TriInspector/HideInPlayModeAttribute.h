#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_HIDEINPLAYMODEATTRIBUTE_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCEED0)
#define TRIINSPECTOR_HIDEINPLAYMODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEEE0)
#define TRIINSPECTOR_HIDEINPLAYMODEATTRIBUTE_SET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCEEF0)

namespace TriInspector
{
	inline static constexpr unsigned int HideInPlayModeAttribute_TypeDefinitionIndex = 37833;

	class HideInPlayModeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _Inverse_k__BackingField; // 0x10

		::System::Boolean get_Inverse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEINPLAYMODEATTRIBUTE_GET_INVERSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEINPLAYMODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Inverse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEINPLAYMODEATTRIBUTE_SET_INVERSE_OFFSET))(arg, nullptr);
		}

	};
}

