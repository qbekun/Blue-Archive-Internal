#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NPCSInfo; }
namespace NPA::Promotion { class NXPToyQRCodeInfo; }
namespace NPA::Promotion { class NXPToyCustomQRCodeInfo; }

#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C184B0)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x9C185D0)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWFAQ_OFFSET UNITYSDK_OFFSET(0x9C185E0)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWBATCHNOTICE_OFFSET UNITYSDK_OFFSET(0x9C185F0)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9C18600)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWHELPCENTER_OFFSET UNITYSDK_OFFSET(0x9C18610)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWNEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9C18620)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C18630)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C18640)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C18650)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_CLOSEPLATE_OFFSET UNITYSDK_OFFSET(0x9C18660)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWTERMS_OFFSET UNITYSDK_OFFSET(0x9C18670)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9C18680)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWITEMPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9C18690)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_GETNEXONOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9C186A0)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SETNEXONOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9C186B0)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x9C186C0)
#define NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWCUSTOMQRCODE_OFFSET UNITYSDK_OFFSET(0x9C186D0)

namespace NPA::Editor::Operate
{
	inline static constexpr unsigned int NXPOperateMock_TypeDefinitionIndex = 26610;

	class NXPOperateMock : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowFAQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWFAQ_OFFSET))(nullptr);
		}

		::System::Void ShowBatchNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWBATCHNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowToday(::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWTODAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowHelpCenter(::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWHELPCENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowNexonCustomerCenter(::NPA::NPCSInfo* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWNEXONCUSTOMERCENTER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWPLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ClosePlate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_CLOSEPLATE_OFFSET))(nullptr);
		}

		::System::Void ShowTerms(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWTERMS_OFFSET))(str, nullptr);
		}

		::System::Void ShowGameInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWGAMEINFO_OFFSET))(nullptr);
		}

		::System::Void ShowItemProbability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWITEMPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void GetNexonOpenApiPolicy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_GETNEXONOPENAPIPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetNexonOpenApiPolicy(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SETNEXONOPENAPIPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowQRCode(::NPA::Promotion::NXPToyQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWQRCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCustomQRCode(::NPA::Promotion::NXPToyCustomQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCustomQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEMOCK_SHOWCUSTOMQRCODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

