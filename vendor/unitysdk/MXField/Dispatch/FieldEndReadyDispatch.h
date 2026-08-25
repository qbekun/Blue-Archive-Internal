#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldSceneInfo; }

#define MXFIELD_DISPATCH_FIELDENDREADYDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC8890)
#define MXFIELD_DISPATCH_FIELDENDREADYDISPATCH_GET_SCENEINFO_OFFSET UNITYSDK_OFFSET(0xEC88D0)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int FieldEndReadyDispatch_TypeDefinitionIndex = 10897;

	class FieldEndReadyDispatch : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldSceneInfo* _SceneInfo_k__BackingField; // 0x18

		::System::Void .ctor(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDENDREADYDISPATCH_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_SceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDENDREADYDISPATCH_GET_SCENEINFO_OFFSET))(nullptr);
		}

	};
}

