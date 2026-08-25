#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_ONRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_PROCESSBANUSER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_GETRELEASETOKENINRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_DISPATCHRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPToyBanUserHandler`1_TypeDefinitionIndex = 26517;

	class NXPToyBanUserHandler`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Action_k__BackingField; // 0x0
		Il2CppObject* callbackAction; // 0x0
		Il2CppObject* banUserAction; // 0x0

		Il2CppObject* get_Action()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_GET_ACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_ONRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessBanUser(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_PROCESSBANUSER_OFFSET))(arg, nullptr);
		}

		::System::String* GetReleaseTokenInResult(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_GETRELEASETOKENINRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void DispatchResult(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPTOYBANUSERHANDLER`1_DISPATCHRESULT_OFFSET))(arg, arg, nullptr);
		}

	};
}

