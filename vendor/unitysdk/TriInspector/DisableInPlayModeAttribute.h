#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DISABLEINPLAYMODEATTRIBUTE_SET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCE8F0)
#define TRIINSPECTOR_DISABLEINPLAYMODEATTRIBUTE_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCE900)
#define TRIINSPECTOR_DISABLEINPLAYMODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE910)

namespace TriInspector
{
	inline static constexpr unsigned int DisableInPlayModeAttribute_TypeDefinitionIndex = 37818;

	class DisableInPlayModeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _Inverse_k__BackingField; // 0x10

		::System::Void set_Inverse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEINPLAYMODEATTRIBUTE_SET_INVERSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Inverse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEINPLAYMODEATTRIBUTE_GET_INVERSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEINPLAYMODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

