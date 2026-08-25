#pragma once
#include "../unitysdk.h"

namespace FlatData { class FieldObjectVisibleTag; }

#define MXFIELD_FIELDOBJECTVISIBLEDISPATCH_GET_OBJECTVISIBLETYPE_OFFSET UNITYSDK_OFFSET(0xE6D650)
#define MXFIELD_FIELDOBJECTVISIBLEDISPATCH_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xE6D660)
#define MXFIELD_FIELDOBJECTVISIBLEDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6D670)

namespace MXField
{
	inline static constexpr unsigned int FieldObjectVisibleDispatch_TypeDefinitionIndex = 10516;

	class FieldObjectVisibleDispatch : public Il2CppObject
	{
	public:
		::FlatData::FieldObjectVisibleTag* _ObjectVisibleType_k__BackingField; // 0x18
		::System::Boolean _IsVisible_k__BackingField; // 0x1C

		::FlatData::FieldObjectVisibleTag* get_ObjectVisibleType()
		{
			return ((::FlatData::FieldObjectVisibleTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEDISPATCH_GET_OBJECTVISIBLETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEDISPATCH_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::FlatData::FieldObjectVisibleTag* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Object*, ::FlatData::FieldObjectVisibleTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEDISPATCH_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

