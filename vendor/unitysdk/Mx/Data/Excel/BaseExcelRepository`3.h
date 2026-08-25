#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_PARSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_SELECTFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_SELECTFIRSTFROMCACHE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BaseExcelRepository`3_TypeDefinitionIndex = 16538;

	class BaseExcelRepository`3 : public <co_PostInit>d__114
	{
	public:
		Il2CppObject* delegateGetRootAs; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		Il2CppObject* Parse(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_PARSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_SELECTFIRST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirstFromCache(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEEXCELREPOSITORY`3_SELECTFIRSTFROMCACHE_OFFSET))(arg, arg, nullptr);
		}

	};
}

