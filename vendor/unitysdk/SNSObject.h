#pragma once
#include "unitysdk.h"

#define SNSOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE5AA0)
#define SNSOBJECT_GETPOSTDBS_OFFSET UNITYSDK_OFFSET(0xAE0FA0)
#define SNSOBJECT_SYNCPOSTDBSOVERWRITE_OFFSET UNITYSDK_OFFSET(0xAE5B20)
#define SNSOBJECT_SYNCPOSTDBS_OFFSET UNITYSDK_OFFSET(0xAE5240)

	inline static constexpr unsigned int SNSObject_TypeDefinitionIndex = 8091;

	class SNSObject : public Il2CppObject
	{
	public:
		Il2CppObject* _postDBsByPostId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SNSOBJECT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetPostDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SNSOBJECT_GETPOSTDBS_OFFSET))(nullptr);
		}

		::System::Void SyncPostDBsOverwrite(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SNSOBJECT_SYNCPOSTDBSOVERWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void SyncPostDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SNSOBJECT_SYNCPOSTDBS_OFFSET))(arg, nullptr);
		}

	};

