#pragma once
#include "unitysdk.h"

class UIEmblemParcelDetail;
namespace MX::Data::UIEmblem { class UIEmblemParcelFXHandler; }
namespace UnityEngine { class GameObject; }
class MXButton;
class EmblemFromUIType;
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }
class EmblemLoadInfo;
namespace MX::Data { class EmblemInfo; }
namespace FlatData { class EmblemCategory; }
class UIPopup_Tooltip;

#define UIEMBLEMPARCEL_GET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x23E92A0)
#define UIEMBLEMPARCEL_SET_EMBLEMID_OFFSET UNITYSDK_OFFSET(0x23E92B0)
#define UIEMBLEMPARCEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x23E92C0)
#define UIEMBLEMPARCEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23E9400)
#define UIEMBLEMPARCEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23E9590)
#define UIEMBLEMPARCEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x23E95B0)
#define UIEMBLEMPARCEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x23E95D0)
#define UIEMBLEMPARCEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x23E9450)
#define UIEMBLEMPARCEL_SETACTIVEEMBLEM_OFFSET UNITYSDK_OFFSET(0x23E9E60)
#define UIEMBLEMPARCEL_GETLOADINFO_OFFSET UNITYSDK_OFFSET(0x23EA290)
#define UIEMBLEMPARCEL_SETMARK_OFFSET UNITYSDK_OFFSET(0x23E9AA0)
#define UIEMBLEMPARCEL_SETSELECTMARK_OFFSET UNITYSDK_OFFSET(0x23EA570)
#define UIEMBLEMPARCEL_SETEQUIPMARK_OFFSET UNITYSDK_OFFSET(0x23EA590)
#define UIEMBLEMPARCEL_SELECTEMBLEMPREFAB_OFFSET UNITYSDK_OFFSET(0x23E9680)
#define UIEMBLEMPARCEL_CHECKUNLOCK_OFFSET UNITYSDK_OFFSET(0x23EA470)
#define UIEMBLEMPARCEL_ONCLICKEMBLEM_OFFSET UNITYSDK_OFFSET(0x23EA640)
#define UIEMBLEMPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EAC30)
#define UIEMBLEMPARCEL__ONCLICKEMBLEM_B__31_3_OFFSET UNITYSDK_OFFSET(0x23EACA0)

	inline static constexpr unsigned int UIEmblemParcel_TypeDefinitionIndex = 5396;

	class UIEmblemParcel : public Il2CppObject
	{
	public:
		UIEmblemParcelDetail* DefaultEmblem; // 0x18
		UIEmblemParcelDetail* GroupStoryEmblem; // 0x20
		UIEmblemParcelDetail* FavorEmblem; // 0x28
		UIEmblemParcelDetail* ImageEmblem; // 0x30
		UIEmblemParcelDetail* BossEmblem; // 0x38
		UIEmblemParcelDetail* BestRecordEmblem; // 0x40
		::MX::Data::UIEmblem::UIEmblemParcelFXHandler* FXHandler; // 0x48
		UIEmblemParcelDetail* activeEmblem; // 0x50
		::UnityEngine::GameObject* SelectObject; // 0x58
		::UnityEngine::GameObject* EquipObject; // 0x60
		::UnityEngine::GameObject* LockObject; // 0x68
		MXButton* Button; // 0x70
		::System::Int64 _EmblemId_k__BackingField; // 0x78
		EmblemFromUIType* emblemFromUIType; // 0x80
		::System::Boolean needEnableRefresh; // 0x84

		::System::Int64 get_EmblemId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_GET_EMBLEMID_OFFSET))(nullptr);
		}

		::System::Void set_EmblemId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_SET_EMBLEMID_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MX::GameLogic::DBModel::AccountAttachmentDB* arg, EmblemFromUIType* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, EmblemFromUIType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Refresh(::System::Int64 arg, EmblemFromUIType* arg2)
		{
			((::System::Void(*)(::System::Int64, EmblemFromUIType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetActiveEmblem(EmblemLoadInfo* arg, EmblemFromUIType* arg2)
		{
			((::System::Void(*)(EmblemLoadInfo*, EmblemFromUIType*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_SETACTIVEEMBLEM_OFFSET))(arg, arg2, nullptr);
		}

		EmblemLoadInfo* GetLoadInfo()
		{
			return ((EmblemLoadInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_GETLOADINFO_OFFSET))(nullptr);
		}

		::System::Void SetMark(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_SETMARK_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectMark(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_SETSELECTMARK_OFFSET))(arg, nullptr);
		}

		::System::Void SetEquipMark(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_SETEQUIPMARK_OFFSET))(arg, nullptr);
		}

		UIEmblemParcelDetail* SelectEmblemPrefab(::FlatData::EmblemCategory* arg)
		{
			return ((UIEmblemParcelDetail*(*)(::FlatData::EmblemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_SELECTEMBLEMPREFAB_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckUnlock(::MX::Data::EmblemInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_CHECKUNLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEmblem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_ONCLICKEMBLEM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEmblem_b__31_3(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMPARCEL__ONCLICKEMBLEM_B__31_3_OFFSET))(arg, nullptr);
		}

	};

