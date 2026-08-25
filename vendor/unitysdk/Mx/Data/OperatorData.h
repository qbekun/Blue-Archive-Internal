#pragma once
#include "../../unitysdk.h"

namespace FlatData { class OperatorCondition; }

#define MX_DATA_OPERATORDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x191E050)
#define MX_DATA_OPERATORDATA_GETOPERATOREXCELSFROMCONDITION_OFFSET UNITYSDK_OFFSET(0x191E090)
#define MX_DATA_OPERATORDATA_GETOPERATOREXCELGROUP_OFFSET UNITYSDK_OFFSET(0x191E200)
#define MX_DATA_OPERATORDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x191E280)

namespace MX::Data
{
	inline static constexpr unsigned int OperatorData_TypeDefinitionIndex = 16286;

	class OperatorData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPERATORDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOperatorExcelsFromCondition(::FlatData::OperatorCondition* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::OperatorCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPERATORDATA_GETOPERATOREXCELSFROMCONDITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOperatorExcelGroup(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPERATORDATA_GETOPERATOREXCELGROUP_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPERATORDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

