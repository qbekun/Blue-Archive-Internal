#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace MX::Data::UIEmblem { class UIEmblemParcelFXHandler; }
class EmblemLoadInfo;
namespace UnityEngine { class Texture; }
namespace MX::Data { class EmblemInfo; }
class UIWidget;

#define UIEMBLEMPARCELDETAIL_SETEMBLEM_OFFSET UNITYSDK_OFFSET(0x23E9F80)
#define UIEMBLEMPARCELDETAIL_ONICONLOADED_OFFSET UNITYSDK_OFFSET(0x23EB3E0)
#define UIEMBLEMPARCELDETAIL_SETTITLELABELIMPL_OFFSET UNITYSDK_OFFSET(0x23EB420)
#define UIEMBLEMPARCELDETAIL_SETINHERITEDWIDGETS_OFFSET UNITYSDK_OFFSET(0x23EB500)
#define UIEMBLEMPARCELDETAIL_GET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x23EB510)
#define UIEMBLEMPARCELDETAIL_GETWIDGET_OFFSET UNITYSDK_OFFSET(0x23EB520)
#define UIEMBLEMPARCELDETAIL_SETFXHANDLER_OFFSET UNITYSDK_OFFSET(0x23EA5B0)
#define UIEMBLEMPARCELDETAIL_ONICONBGLOADED_OFFSET UNITYSDK_OFFSET(0x23EB530)
#define UIEMBLEMPARCELDETAIL_UPDATE_OFFSET UNITYSDK_OFFSET(0x23EB570)
#define UIEMBLEMPARCELDETAIL_GETEMBLEMLOADINFO_OFFSET UNITYSDK_OFFSET(0x23EA2C0)
#define UIEMBLEMPARCELDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EB5A0)
#define UIEMBLEMPARCELDETAIL_SETWIDGETS_OFFSET UNITYSDK_OFFSET(0x23EB360)
#define UIEMBLEMPARCELDETAIL_GETFXWIDGET_OFFSET UNITYSDK_OFFSET(0x23EB6F0)
#define UIEMBLEMPARCELDETAIL_ONBGLOADED_OFFSET UNITYSDK_OFFSET(0x23EB700)
#define UIEMBLEMPARCELDETAIL_SETTITLELABEL_OFFSET UNITYSDK_OFFSET(0x23EB5B0)
#define UIEMBLEMPARCELDETAIL_LOADEMBLEM_OFFSET UNITYSDK_OFFSET(0x23E9800)
#define UIEMBLEMPARCELDETAIL_SETFX_OFFSET UNITYSDK_OFFSET(0x23EB690)

	inline static constexpr unsigned int UIEmblemParcelDetail_TypeDefinitionIndex = 5398;

	class UIEmblemParcelDetail : public Il2CppObject
	{
	public:
		UITexture* BG; // 0x18
		UITexture* Icon; // 0x20
		UILabel* Label; // 0x28
		UITexture* IconBG; // 0x30
		::System::Int64 emblemId; // 0x38
		::MX::Data::UIEmblem::UIEmblemParcelFXHandler* fxHandler; // 0x40
		::System::Boolean isFXHandlerInitialized; // 0x48

		::System::Void SetEmblem(EmblemLoadInfo* arg)
		{
			((::System::Void(*)(EmblemLoadInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_SETEMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnIconLoaded(::UnityEngine::Texture* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_ONICONLOADED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTitleLabelImpl(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_SETTITLELABELIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void SetInheritedWidgets(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_SETINHERITEDWIDGETS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_GET_EMBLEMID_OFFSET))(nullptr);
		}

		UIWidget* GetWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_GETWIDGET_OFFSET))(nullptr);
		}

		::System::Void SetFXHandler(::MX::Data::UIEmblem::UIEmblemParcelFXHandler* arg)
		{
			((::System::Void(*)(::MX::Data::UIEmblem::UIEmblemParcelFXHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_SETFXHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnIconBGLoaded(::UnityEngine::Texture* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_ONICONBGLOADED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_UPDATE_OFFSET))(nullptr);
		}

		EmblemLoadInfo* GetEmblemLoadInfo()
		{
			return ((EmblemLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_GETEMBLEMLOADINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidgets(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_SETWIDGETS_OFFSET))(arg, nullptr);
		}

		UIWidget* GetFXWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_GETFXWIDGET_OFFSET))(nullptr);
		}

		::System::Void OnBGLoaded(::UnityEngine::Texture* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_ONBGLOADED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTitleLabel(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_SETTITLELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void LoadEmblem(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_LOADEMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetFX(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCELDETAIL_SETFX_OFFSET))(arg, nullptr);
		}

	};

