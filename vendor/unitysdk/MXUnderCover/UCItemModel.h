#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
class SaveDataInternal;
namespace MXUnderCover { class ItemDataAsset; }
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCItemModel; }

#define MXUNDERCOVER_UCITEMMODEL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDAB810)
#define MXUNDERCOVER_UCITEMMODEL_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDAB820)
#define MXUNDERCOVER_UCITEMMODEL_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xDAB830)
#define MXUNDERCOVER_UCITEMMODEL_SET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xDAB840)
#define MXUNDERCOVER_UCITEMMODEL_GET_ISITEMREMAIN_OFFSET UNITYSDK_OFFSET(0xDAB850)
#define MXUNDERCOVER_UCITEMMODEL_GET_ISREMAIN_OFFSET UNITYSDK_OFFSET(0xDAB870)
#define MXUNDERCOVER_UCITEMMODEL_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xDAB8F0)
#define MXUNDERCOVER_UCITEMMODEL_GET_ISCOOLTIMERRUNNING_OFFSET UNITYSDK_OFFSET(0xDAB950)
#define MXUNDERCOVER_UCITEMMODEL_GET_ISENABLEDBUTTONEFFECT_OFFSET UNITYSDK_OFFSET(0xDAB990)
#define MXUNDERCOVER_UCITEMMODEL_SET_ISENABLEDBUTTONEFFECT_OFFSET UNITYSDK_OFFSET(0xDAB9B0)
#define MXUNDERCOVER_UCITEMMODEL_GET_ISUSEENDED_OFFSET UNITYSDK_OFFSET(0xDAB9D0)
#define MXUNDERCOVER_UCITEMMODEL_SET_ISUSEENDED_OFFSET UNITYSDK_OFFSET(0xDAB9E0)
#define MXUNDERCOVER_UCITEMMODEL_GET_REMAINSKILLCOOLTIME_OFFSET UNITYSDK_OFFSET(0xDAB9F0)
#define MXUNDERCOVER_UCITEMMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAB040)
#define MXUNDERCOVER_UCITEMMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA9520)
#define MXUNDERCOVER_UCITEMMODEL_CO_COOLTIMER_OFFSET UNITYSDK_OFFSET(0xDABA60)
#define MXUNDERCOVER_UCITEMMODEL_GETITEMREMAIN_OFFSET UNITYSDK_OFFSET(0xDABB10)
#define MXUNDERCOVER_UCITEMMODEL_GETREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xDABB30)
#define MXUNDERCOVER_UCITEMMODEL_GETCOOLTIME_OFFSET UNITYSDK_OFFSET(0xDABB70)
#define MXUNDERCOVER_UCITEMMODEL_ADD_OFFSET UNITYSDK_OFFSET(0xDAAF90)
#define MXUNDERCOVER_UCITEMMODEL_USE_OFFSET UNITYSDK_OFFSET(0xDABBE0)
#define MXUNDERCOVER_UCITEMMODEL_SAVE_OFFSET UNITYSDK_OFFSET(0xDAA9C0)
#define MXUNDERCOVER_UCITEMMODEL_LOAD_OFFSET UNITYSDK_OFFSET(0xDA94B0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCItemModel_TypeDefinitionIndex = 9897;

	class UCItemModel : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x10
		SaveDataInternal* temporaryDataInternal; // 0x18
		SaveDataInternal* saveDataInternal; // 0x20
		::MXUnderCover::ItemDataAsset* _ItemData_k__BackingField; // 0x28
		::System::Boolean _IsUseEnded_k__BackingField; // 0x30
		::System::Single skillTimer; // 0x34
		CoroutineAsyncOperation* coolTimeOperation; // 0x38

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::ItemDataAsset* get_ItemData()
		{
			return ((::MXUnderCover::ItemDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_ITEMDATA_OFFSET))(nullptr);
		}

		::System::Void set_ItemData(::MXUnderCover::ItemDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_SET_ITEMDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsItemRemain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_ISITEMREMAIN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRemain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_ISREMAIN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_ISINFINITE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCooltimerRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_ISCOOLTIMERRUNNING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnabledButtonEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_ISENABLEDBUTTONEFFECT_OFFSET))(nullptr);
		}

		::System::Void set_IsEnabledButtonEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_SET_ISENABLEDBUTTONEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUseEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_ISUSEENDED_OFFSET))(nullptr);
		}

		::System::Void set_IsUseEnded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_SET_ISUSEENDED_OFFSET))(arg, nullptr);
		}

		::System::Single get_RemainSkillCoolTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GET_REMAINSKILLCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCStage* arg, ::MXUnderCover::ItemDataAsset* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_CoolTimer(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_CO_COOLTIMER_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetItemRemain()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GETITEMREMAIN_OFFSET))(nullptr);
		}

		::System::Int32 GetRemainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GETREMAINCOUNT_OFFSET))(nullptr);
		}

		::System::Single GetCoolTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_GETCOOLTIME_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Use(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_USE_OFFSET))(arg, nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_SAVE_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCITEMMODEL_LOAD_OFFSET))(nullptr);
		}

	};
}

