#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NPCSInfo; }
namespace NPA::Promotion { class NXPToyQRCodeInfo; }
namespace NPA::Promotion { class NXPToyCustomQRCodeInfo; }

#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C18490)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWFAQ_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWBATCHNOTICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWTODAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWHELPCENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWNEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWPLATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_CLOSEPLATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWTERMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWGAMEINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWITEMPROBABILITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_GETNEXONOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SETNEXONOPENAPIPOLICY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWQRCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWCUSTOMQRCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Operate
{
	inline static constexpr unsigned int NXPOperateBase_TypeDefinitionIndex = 26608;

	class NXPOperateBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowFAQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWFAQ_OFFSET))(nullptr);
		}

		::System::Void ShowBatchNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWBATCHNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowToday(::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWTODAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowHelpCenter(::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWHELPCENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowNexonCustomerCenter(::NPA::NPCSInfo* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWNEXONCUSTOMERCENTER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWPLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ShowPlate(::System::Int32 arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::NPCSInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWPLATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ClosePlate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_CLOSEPLATE_OFFSET))(nullptr);
		}

		::System::Void ShowTerms(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWTERMS_OFFSET))(str, nullptr);
		}

		::System::Void ShowGameInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWGAMEINFO_OFFSET))(nullptr);
		}

		::System::Void ShowItemProbability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWITEMPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void GetNexonOpenApiPolicy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_GETNEXONOPENAPIPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetNexonOpenApiPolicy(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SETNEXONOPENAPIPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowQRCode(::NPA::Promotion::NXPToyQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWQRCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowCustomQRCode(::NPA::Promotion::NXPToyCustomQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCustomQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPOPERATEBASE_SHOWCUSTOMQRCODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

