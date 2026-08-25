#pragma once
#include "unitysdk.h"

#define TABLESERVICE_CREATEPASSWORD_OFFSET UNITYSDK_OFFSET(0x2107B60)
#define TABLESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2107C60)
#define TABLESERVICE_LOADBYTES_OFFSET UNITYSDK_OFFSET(0x2107CA0)
#define TABLESERVICE_LOAD_OFFSET UNITYSDK_OFFSET(0x2107D30)
#define TABLESERVICE_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x2107DC0)

	inline static constexpr unsigned int TableService_TypeDefinitionIndex = 3856;

	class TableService : public Il2CppObject
	{
	public:
		::System::Boolean HasChanged; // 0x0

		::System::String* CreatePassword(::System::String* str, ::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TABLESERVICE_CREATEPASSWORD_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLESERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* LoadBytes(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABLESERVICE_LOADBYTES_OFFSET))(str, str2, arg, nullptr);
		}

		::System::String* Load(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TABLESERVICE_LOAD_OFFSET))(str, str2, nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLESERVICE_CLEARCACHE_OFFSET))(nullptr);
		}

	};

