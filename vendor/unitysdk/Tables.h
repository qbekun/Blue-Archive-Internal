#pragma once
#include "unitysdk.h"

#define TABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Tables_TypeDefinitionIndex = 25105;

	class Tables : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* _locks; // 0x0
		::Il2CppArray<::System::Object*>* _countPerLock; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TABLES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

