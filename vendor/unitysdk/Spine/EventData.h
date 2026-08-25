#pragma once
#include "../unitysdk.h"

#define SPINE_EVENTDATA_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x95AC320)
#define SPINE_EVENTDATA_SET_BALANCE_OFFSET UNITYSDK_OFFSET(0x95AC330)
#define SPINE_EVENTDATA_SET_FLOAT_OFFSET UNITYSDK_OFFSET(0x95AC340)
#define SPINE_EVENTDATA_GET_INT_OFFSET UNITYSDK_OFFSET(0x95AC350)
#define SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x95AC360)
#define SPINE_EVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95AC370)
#define SPINE_EVENTDATA_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x95AC380)
#define SPINE_EVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AC390)
#define SPINE_EVENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x95AC430)
#define SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x95AC440)
#define SPINE_EVENTDATA_SET_INT_OFFSET UNITYSDK_OFFSET(0x95AC450)
#define SPINE_EVENTDATA_SET_STRING_OFFSET UNITYSDK_OFFSET(0x95AC460)
#define SPINE_EVENTDATA_GET_FLOAT_OFFSET UNITYSDK_OFFSET(0x95AC470)
#define SPINE_EVENTDATA_GET_STRING_OFFSET UNITYSDK_OFFSET(0x95AC480)
#define SPINE_EVENTDATA_GET_BALANCE_OFFSET UNITYSDK_OFFSET(0x95AC490)

namespace Spine
{
	inline static constexpr unsigned int EventData_TypeDefinitionIndex = 35035;

	class EventData : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 _Int_k__BackingField; // 0x18
		::System::Single _Float_k__BackingField; // 0x1C
		::System::String* _String_k__BackingField; // 0x20
		::System::String* _AudioPath_k__BackingField; // 0x28
		::System::Single _Volume_k__BackingField; // 0x30
		::System::Single _Balance_k__BackingField; // 0x34

		::System::Void set_Volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Balance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_BALANCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Float(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_FLOAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Int()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_INT_OFFSET))(nullptr);
		}

		::System::String* get_AudioPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_AudioPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_Int(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_INT_OFFSET))(arg, nullptr);
		}

		::System::Void set_String(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_STRING_OFFSET))(str, nullptr);
		}

		::System::Single get_Float()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_FLOAT_OFFSET))(nullptr);
		}

		::System::String* get_String()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_STRING_OFFSET))(nullptr);
		}

		::System::Single get_Balance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_BALANCE_OFFSET))(nullptr);
		}

	};
}

