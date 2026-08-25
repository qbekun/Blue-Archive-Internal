#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldSceneInfo; }

#define MXFIELD_DISPATCH_FIELDSCENECHANGEDDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC8840)
#define MXFIELD_DISPATCH_FIELDSCENECHANGEDDISPATCH_GET_SCENEINFO_OFFSET UNITYSDK_OFFSET(0xEC8880)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int FieldSceneChangedDispatch_TypeDefinitionIndex = 10896;

	class FieldSceneChangedDispatch : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldSceneInfo* _SceneInfo_k__BackingField; // 0x18

		::System::Void .ctor(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDSCENECHANGEDDISPATCH_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_SceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDSCENECHANGEDDISPATCH_GET_SCENEINFO_OFFSET))(nullptr);
		}

	};
}

