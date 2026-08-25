#pragma once
#include "../unitysdk.h"

namespace FlatData { class FieldObjectVisibleTag; }
namespace UnityEngine { class Animation; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_HANDLEOBJECTVISIBLEDISPATCH_OFFSET UNITYSDK_OFFSET(0xE6D6A0)
#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE6D740)
#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_GET_READYTOPLAY_OFFSET UNITYSDK_OFFSET(0xE6D8E0)
#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE6D8F0)
#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_SET_READYTOPLAY_OFFSET UNITYSDK_OFFSET(0xE6DA40)
#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE6DA50)
#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6DA90)
#define MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_GET_OBJECTVISIBLETYPE_OFFSET UNITYSDK_OFFSET(0xE6DAA0)

namespace MXField
{
	inline static constexpr unsigned int FieldObjectVisibleActionListener_TypeDefinitionIndex = 10517;

	class FieldObjectVisibleActionListener : public Il2CppObject
	{
	public:
		::System::Boolean _activeOnAwake; // 0x18
		::FlatData::FieldObjectVisibleTag* _objectVisibleType; // 0x1C
		::UnityEngine::Animation* _enableAnimation; // 0x20
		::System::Boolean _alwaysPlayAniOnEnable; // 0x28
		::System::Boolean _ReadyToPlay_k__BackingField; // 0x29
		::System::Boolean _isAniPlayed; // 0x2A

		::System::Boolean HandleObjectVisibleDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_HANDLEOBJECTVISIBLEDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_ReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_GET_READYTOPLAY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_ReadyToPlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_SET_READYTOPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::FieldObjectVisibleTag* get_ObjectVisibleType()
		{
			return ((::FlatData::FieldObjectVisibleTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDOBJECTVISIBLEACTIONLISTENER_GET_OBJECTVISIBLETYPE_OFFSET))(nullptr);
		}

	};
}

