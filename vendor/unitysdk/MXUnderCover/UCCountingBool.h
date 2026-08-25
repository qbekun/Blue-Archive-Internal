#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCCOUNTINGBOOL_INCREASE_OFFSET UNITYSDK_OFFSET(0xDAF730)
#define MXUNDERCOVER_UCCOUNTINGBOOL_DECREASE_OFFSET UNITYSDK_OFFSET(0xDAF740)
#define MXUNDERCOVER_UCCOUNTINGBOOL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xDAF750)
#define MXUNDERCOVER_UCCOUNTINGBOOL_RESET_OFFSET UNITYSDK_OFFSET(0xDAF760)
#define MXUNDERCOVER_UCCOUNTINGBOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAF770)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCountingBool_TypeDefinitionIndex = 9926;

	class UCCountingBool : public Il2CppObject
	{
	public:
		::System::Int32 count; // 0x10

		::System::Void Increase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOUNTINGBOOL_INCREASE_OFFSET))(nullptr);
		}

		::System::Void Decrease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOUNTINGBOOL_DECREASE_OFFSET))(nullptr);
		}

		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOUNTINGBOOL_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOUNTINGBOOL_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCOUNTINGBOOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

