#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_PROPERTYORDERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9DCF230)
#define TRIINSPECTOR_PROPERTYORDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF240)

namespace TriInspector
{
	inline static constexpr unsigned int PropertyOrderAttribute_TypeDefinitionIndex = 37845;

	class PropertyOrderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _Order_k__BackingField; // 0x10

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYORDERATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYORDERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

