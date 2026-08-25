#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D29AE0)
#define NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BE60)
#define NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BE70)
#define NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D2BEA0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPOnInventoryResultReady_TypeDefinitionIndex = 26049;

	class NXPOnInventoryResultReady : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPONINVENTORYRESULTREADY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

