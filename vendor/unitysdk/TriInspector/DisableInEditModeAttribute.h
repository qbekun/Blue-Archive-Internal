#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DISABLEINEDITMODEATTRIBUTE_SET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCE8C0)
#define TRIINSPECTOR_DISABLEINEDITMODEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE8D0)
#define TRIINSPECTOR_DISABLEINEDITMODEATTRIBUTE_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCE8E0)

namespace TriInspector
{
	inline static constexpr unsigned int DisableInEditModeAttribute_TypeDefinitionIndex = 37817;

	class DisableInEditModeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _Inverse_k__BackingField; // 0x10

		::System::Void set_Inverse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEINEDITMODEATTRIBUTE_SET_INVERSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEINEDITMODEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Inverse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEINEDITMODEATTRIBUTE_GET_INVERSE_OFFSET))(nullptr);
		}

	};
}

