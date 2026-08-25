#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NPCSInfo; }
namespace NPA::Promotion { class NXPToyQRCodeInfo; }
namespace NPA::Promotion { class NXPToyCustomQRCodeInfo; }

#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C186E0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x9C186F0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWFAQ_OFFSET UNITYSDK_OFFSET(0x9C18770)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWBATCHNOTICE_OFFSET UNITYSDK_OFFSET(0x9C187F0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9C18870)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWHELPCENTER_OFFSET UNITYSDK_OFFSET(0x9C18910)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWNEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9C189A0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C18A40)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C18AD0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x9C18BB0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_CLOSEPLATE_OFFSET UNITYSDK_OFFSET(0x9C18CA0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWTERMS_OFFSET UNITYSDK_OFFSET(0x9C18D20)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9C18DB0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWITEMPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9C18DC0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_GETNEXONOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9C18E40)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SETNEXONOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x9C18E90)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x9C18EE0)
#define NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWCUSTOMQRCODE_OFFSET UNITYSDK_OFFSET(0x9C18F70)

namespace NPA::Editor::Operate
{
	inline static constexpr unsigned int NXPOperateStandalone_TypeDefinitionIndex = 26611;

	class NXPOperateStandalone : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowFAQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWFAQ_OFFSET))(nullptr);
		}

		::System::Void ShowBatchNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWBATCHNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowToday(::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWTODAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowHelpCenter(::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWHELPCENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowNexonCustomerCenter(::NPA::NPCSInfo* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWNEXONCUSTOMERCENTER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWPLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ClosePlate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_CLOSEPLATE_OFFSET))(nullptr);
		}

		::System::Void ShowTerms(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWTERMS_OFFSET))(str, nullptr);
		}

		::System::Void ShowGameInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWGAMEINFO_OFFSET))(nullptr);
		}

		::System::Void ShowItemProbability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWITEMPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void GetNexonOpenApiPolicy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_GETNEXONOPENAPIPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetNexonOpenApiPolicy(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SETNEXONOPENAPIPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowQRCode(::NPA::Promotion::NXPToyQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWQRCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCustomQRCode(::NPA::Promotion::NXPToyCustomQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCustomQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATESTANDALONE_SHOWCUSTOMQRCODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

