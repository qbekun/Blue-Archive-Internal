#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldCharacterDB; }

#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_GET_CURRENTSCENEID_OFFSET UNITYSDK_OFFSET(0xE6EF70)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SET_CURRENTSCENEID_OFFSET UNITYSDK_OFFSET(0xE6EF80)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_GET_PREVIOUSSCENEID_OFFSET UNITYSDK_OFFSET(0xE6EF90)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SET_PREVIOUSSCENEID_OFFSET UNITYSDK_OFFSET(0xE6EFA0)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_GET_LASTMASTERYID_OFFSET UNITYSDK_OFFSET(0xE6EFB0)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SET_LASTMASTERYID_OFFSET UNITYSDK_OFFSET(0xE6EFC0)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EFD0)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EFE0)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_CREATECHARACTERDB_OFFSET UNITYSDK_OFFSET(0xE6F010)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SCENECHANGE_OFFSET UNITYSDK_OFFSET(0xE6F150)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SCENECHANGE_OFFSET UNITYSDK_OFFSET(0xE6F320)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_MASTERYUPDATE_OFFSET UNITYSDK_OFFSET(0xE6F400)
#define MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_CHECKMASTERYORDER_OFFSET UNITYSDK_OFFSET(0xE6F410)

namespace MXField::Shared::Model
{
	inline static constexpr unsigned int FieldCharacterDB_TypeDefinitionIndex = 10539;

	class FieldCharacterDB : public Il2CppObject
	{
	public:
		::System::Int64 _CurrentSceneId_k__BackingField; // 0x10
		::System::Int64 _PreviousSceneId_k__BackingField; // 0x18
		::System::Int64 _LastMasteryId_k__BackingField; // 0x20
		::System::Boolean WasSceneChanged; // 0x28
		::System::Boolean WasMasteryIdChanged; // 0x29

		::System::Int64 get_CurrentSceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_GET_CURRENTSCENEID_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSceneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SET_CURRENTSCENEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PreviousSceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_GET_PREVIOUSSCENEID_OFFSET))(nullptr);
		}

		::System::Void set_PreviousSceneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SET_PREVIOUSSCENEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LastMasteryId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_GET_LASTMASTERYID_OFFSET))(nullptr);
		}

		::System::Void set_LastMasteryId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SET_LASTMASTERYID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Model::FieldCharacterDB* CreateCharacterDB(::System::Int64 arg)
		{
			return ((::MXField::Shared::Model::FieldCharacterDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_CREATECHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean SceneChange(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SCENECHANGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean SceneChange(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_SCENECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void MasteryUpdate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_MASTERYUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckMasteryOrder(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_MODEL_FIELDCHARACTERDB_CHECKMASTERYORDER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

