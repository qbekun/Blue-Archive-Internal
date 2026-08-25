#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AniStateData; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ANISTATEDATA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDFDF0)
#define FLATDATA_ANISTATEDATA_GETROOTASANISTATEDATA_OFFSET UNITYSDK_OFFSET(0xCDFE00)
#define FLATDATA_ANISTATEDATA_GETROOTASANISTATEDATA_OFFSET UNITYSDK_OFFSET(0xCDFE60)
#define FLATDATA_ANISTATEDATA___INIT_OFFSET UNITYSDK_OFFSET(0xCDFEC0)
#define FLATDATA_ANISTATEDATA___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDFB00)
#define FLATDATA_ANISTATEDATA_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0xCDFEE0)
#define FLATDATA_ANISTATEDATA_GETSTATENAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCDFF20)
#define FLATDATA_ANISTATEDATA_GET_STATEPREFIX_OFFSET UNITYSDK_OFFSET(0xCDFF40)
#define FLATDATA_ANISTATEDATA_GETSTATEPREFIXBYTES_OFFSET UNITYSDK_OFFSET(0xCDFF80)
#define FLATDATA_ANISTATEDATA_GET_STATENAMEWITHPREFIX_OFFSET UNITYSDK_OFFSET(0xCDFFA0)
#define FLATDATA_ANISTATEDATA_GETSTATENAMEWITHPREFIXBYTES_OFFSET UNITYSDK_OFFSET(0xCDFFE0)
#define FLATDATA_ANISTATEDATA_GET_TAG_OFFSET UNITYSDK_OFFSET(0xCE0000)
#define FLATDATA_ANISTATEDATA_GETTAGBYTES_OFFSET UNITYSDK_OFFSET(0xCE0040)
#define FLATDATA_ANISTATEDATA_GET_SPEEDPARAMETERNAME_OFFSET UNITYSDK_OFFSET(0xCE0060)
#define FLATDATA_ANISTATEDATA_GETSPEEDPARAMETERNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCE00A0)
#define FLATDATA_ANISTATEDATA_GET_SPEEDPARAMTER_OFFSET UNITYSDK_OFFSET(0xCE00C0)
#define FLATDATA_ANISTATEDATA_GET_STATESPEED_OFFSET UNITYSDK_OFFSET(0xCE0110)
#define FLATDATA_ANISTATEDATA_GET_CLIPNAME_OFFSET UNITYSDK_OFFSET(0xCE0160)
#define FLATDATA_ANISTATEDATA_GETCLIPNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCE01A0)
#define FLATDATA_ANISTATEDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xCE01C0)
#define FLATDATA_ANISTATEDATA_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0xCE0210)
#define FLATDATA_ANISTATEDATA_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0xCE0260)
#define FLATDATA_ANISTATEDATA_EVENTS_OFFSET UNITYSDK_OFFSET(0xCE02B0)
#define FLATDATA_ANISTATEDATA_GET_EVENTSLENGTH_OFFSET UNITYSDK_OFFSET(0xCE03B0)
#define FLATDATA_ANISTATEDATA_CREATEANISTATEDATA_OFFSET UNITYSDK_OFFSET(0xCE03F0)
#define FLATDATA_ANISTATEDATA_STARTANISTATEDATA_OFFSET UNITYSDK_OFFSET(0xCE08C0)
#define FLATDATA_ANISTATEDATA_ADDSTATENAME_OFFSET UNITYSDK_OFFSET(0xCE0810)
#define FLATDATA_ANISTATEDATA_ADDSTATEPREFIX_OFFSET UNITYSDK_OFFSET(0xCE07E0)
#define FLATDATA_ANISTATEDATA_ADDSTATENAMEWITHPREFIX_OFFSET UNITYSDK_OFFSET(0xCE07B0)
#define FLATDATA_ANISTATEDATA_ADDTAG_OFFSET UNITYSDK_OFFSET(0xCE0780)
#define FLATDATA_ANISTATEDATA_ADDSPEEDPARAMETERNAME_OFFSET UNITYSDK_OFFSET(0xCE0750)
#define FLATDATA_ANISTATEDATA_ADDSPEEDPARAMTER_OFFSET UNITYSDK_OFFSET(0xCE0720)
#define FLATDATA_ANISTATEDATA_ADDSTATESPEED_OFFSET UNITYSDK_OFFSET(0xCE06F0)
#define FLATDATA_ANISTATEDATA_ADDCLIPNAME_OFFSET UNITYSDK_OFFSET(0xCE06C0)
#define FLATDATA_ANISTATEDATA_ADDLENGTH_OFFSET UNITYSDK_OFFSET(0xCE0690)
#define FLATDATA_ANISTATEDATA_ADDFRAMERATE_OFFSET UNITYSDK_OFFSET(0xCE0660)
#define FLATDATA_ANISTATEDATA_ADDISLOOPING_OFFSET UNITYSDK_OFFSET(0xCE0840)
#define FLATDATA_ANISTATEDATA_ADDEVENTS_OFFSET UNITYSDK_OFFSET(0xCE0630)
#define FLATDATA_ANISTATEDATA_CREATEEVENTSVECTOR_OFFSET UNITYSDK_OFFSET(0xCE08E0)
#define FLATDATA_ANISTATEDATA_STARTEVENTSVECTOR_OFFSET UNITYSDK_OFFSET(0xCE0970)
#define FLATDATA_ANISTATEDATA_ENDANISTATEDATA_OFFSET UNITYSDK_OFFSET(0xCE0870)

namespace FlatData
{
	inline static constexpr unsigned int AniStateData_TypeDefinitionIndex = 9192;

	class AniStateData : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AniStateData* GetRootAsAniStateData(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AniStateData*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETROOTASANISTATEDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::AniStateData* GetRootAsAniStateData(::FlatBuffers::ByteBuffer* arg, ::FlatData::AniStateData* arg2)
		{
			return ((::FlatData::AniStateData*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AniStateData*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETROOTASANISTATEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AniStateData* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AniStateData*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_StateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_STATENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetStateNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETSTATENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StatePrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_STATEPREFIX_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatePrefixBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETSTATEPREFIXBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StateNameWithPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_STATENAMEWITHPREFIX_OFFSET))(nullptr);
		}

		Il2CppObject* GetStateNameWithPrefixBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETSTATENAMEWITHPREFIXBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_TAG_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETTAGBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SpeedParameterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_SPEEDPARAMETERNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpeedParameterNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETSPEEDPARAMETERNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Single get_SpeedParamter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_SPEEDPARAMTER_OFFSET))(nullptr);
		}

		::System::Single get_StateSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_STATESPEED_OFFSET))(nullptr);
		}

		::System::String* get_ClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_CLIPNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetClipNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GETCLIPNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Single get_FrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_FRAMERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_ISLOOPING_OFFSET))(nullptr);
		}

		Il2CppObject* Events(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_EVENTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EventsLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_GET_EVENTSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAniStateData(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::StringOffset* arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::StringOffset* arg6, ::System::Single arg7, ::System::Single arg8, ::FlatBuffers::StringOffset* arg9, ::System::Single arg10, ::System::Single arg11, ::System::Boolean arg12, ::FlatBuffers::VectorOffset* arg13)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Single, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Single, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_CREATEANISTATEDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void StartAniStateData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_STARTANISTATEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddStateName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDSTATENAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStatePrefix(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDSTATEPREFIX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStateNameWithPrefix(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDSTATENAMEWITHPREFIX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDTAG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSpeedParameterName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDSPEEDPARAMETERNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSpeedParamter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDSPEEDPARAMTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStateSpeed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDSTATESPEED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddClipName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDCLIPNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLength(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDLENGTH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFrameRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDFRAMERATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddIsLooping(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDISLOOPING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEvents(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ADDEVENTS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEventsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_CREATEEVENTSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEventsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_STARTEVENTSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAniStateData(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANISTATEDATA_ENDANISTATEDATA_OFFSET))(arg, nullptr);
		}

	};
}

