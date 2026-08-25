#pragma once
#include "unitysdk.h"

class UIBase;

#define CONQUESTRESOURCESERVICE_REGISTERUIBASE_OFFSET UNITYSDK_OFFSET(0x1BE4800)
#define CONQUESTRESOURCESERVICE_GETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTRESOURCESERVICE_REGISTERRESOURCEKEY_OFFSET UNITYSDK_OFFSET(0x1BE48F0)
#define CONQUESTRESOURCESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE49E0)
#define CONQUESTRESOURCESERVICE_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTRESOURCESERVICE_RELEASEALLRESOURCES_OFFSET UNITYSDK_OFFSET(0x1BE4AE0)
#define CONQUESTRESOURCESERVICE_OPENASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTRESOURCESERVICE_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONQUESTRESOURCESERVICE_LOADSYNC_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ConquestResourceService_TypeDefinitionIndex = 1528;

	class ConquestResourceService : public Il2CppObject
	{
	public:
		Il2CppObject* resourceKeys; // 0x0
		Il2CppObject* uiBases; // 0x8

		::System::Void RegisterUIBase(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_REGISTERUIBASE_OFFSET))(arg, nullptr);
		}

		::System::Void GetAsync(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_GETASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterResourceKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_REGISTERRESOURCEKEY_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Load(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_LOAD_OFFSET))(str, nullptr);
		}

		::System::Void ReleaseAllResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_RELEASEALLRESOURCES_OFFSET))(nullptr);
		}

		::System::Void OpenAsync(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_OPENASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadAsync(::System::String* str, Il2CppObject* arg, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_LOADASYNC_OFFSET))(str, arg, str2, nullptr);
		}

		Il2CppObject* LoadSync(::System::String* str, ::System::String* str2)
		{
			return ((Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRESOURCESERVICE_LOADSYNC_OFFSET))(str, str2, nullptr);
		}

	};

