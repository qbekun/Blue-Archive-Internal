#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class OperatorCondition; }

#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C22590)
#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x1C22880)
#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_OPERATORCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1C22BD0)
#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C22FE0)
#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C232F0)
#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C236F0)
#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECTFIRST_OPERATORCONDITION_OFFSET UNITYSDK_OFFSET(0x1C23730)
#define MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C23AA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int OperatorExcelRepository_TypeDefinitionIndex = 19011;

	class OperatorExcelRepository : public <co_InternalInvoke>d__5
	{
	public:
		Il2CppObject* Select_GroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_GROUPID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_OperatorCondition(::FlatData::OperatorCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::OperatorCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_OPERATORCONDITION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_OperatorConditions(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_OPERATORCONDITIONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_OperatorCondition(::FlatData::OperatorCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::OperatorCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_SELECTFIRST_OPERATORCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPERATOREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

