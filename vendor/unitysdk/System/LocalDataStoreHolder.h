#pragma once
#include "../unitysdk.h"

#define SYSTEM_LOCALDATASTOREHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x938FF30)
#define SYSTEM_LOCALDATASTOREHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x938FF60)
#define SYSTEM_LOCALDATASTOREHOLDER_GET_STORE_OFFSET UNITYSDK_OFFSET(0x9390060)

namespace System
{
	inline static constexpr unsigned int LocalDataStoreHolder_TypeDefinitionIndex = 23912;

	class LocalDataStoreHolder : public Il2CppObject
	{
	public:
		::System::LocalDataStore* m_Store; // 0x10

		::System::Void .ctor(::System::LocalDataStore* arg)
		{
			((::System::Void(*)(::System::LocalDataStore*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREHOLDER_FINALIZE_OFFSET))(nullptr);
		}

		::System::LocalDataStore* get_Store()
		{
			return (return (::System::LocalDataStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALDATASTOREHOLDER_GET_STORE_OFFSET))(nullptr);
		}

	};
}

