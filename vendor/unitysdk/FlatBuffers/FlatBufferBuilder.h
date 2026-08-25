#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class ByteBuffer; }
namespace FlatBuffers { class VectorOffset; }

#define FLATBUFFERS_FLATBUFFERBUILDER_GET_FORCEDEFAULTS_OFFSET UNITYSDK_OFFSET(0x28A1090)
#define FLATBUFFERS_FLATBUFFERBUILDER_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x28A10A0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PAD_OFFSET UNITYSDK_OFFSET(0x28A10D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_GROWBUFFER_OFFSET UNITYSDK_OFFSET(0x28A1100)
#define FLATBUFFERS_FLATBUFFERBUILDER_PREP_OFFSET UNITYSDK_OFFSET(0x28A1130)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTBOOL_OFFSET UNITYSDK_OFFSET(0x28A1200)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTSBYTE_OFFSET UNITYSDK_OFFSET(0x28A1250)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTSHORT_OFFSET UNITYSDK_OFFSET(0x28A1280)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTINT_OFFSET UNITYSDK_OFFSET(0x28A12B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTUINT_OFFSET UNITYSDK_OFFSET(0x28A12E0)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTLONG_OFFSET UNITYSDK_OFFSET(0x28A1310)
#define FLATBUFFERS_FLATBUFFERBUILDER_PUTFLOAT_OFFSET UNITYSDK_OFFSET(0x28A1340)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_OFFSET UNITYSDK_OFFSET(0x28A1370)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_OFFSET UNITYSDK_OFFSET(0x28A13D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_OFFSET UNITYSDK_OFFSET(0x28A1410)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_OFFSET UNITYSDK_OFFSET(0x28A1450)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_OFFSET UNITYSDK_OFFSET(0x28A1490)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_OFFSET UNITYSDK_OFFSET(0x28A14D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_OFFSET UNITYSDK_OFFSET(0x28A1510)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_OFFSET UNITYSDK_OFFSET(0x28A1560)
#define FLATBUFFERS_FLATBUFFERBUILDER_STARTVECTOR_OFFSET UNITYSDK_OFFSET(0x28A1600)
#define FLATBUFFERS_FLATBUFFERBUILDER_ENDVECTOR_OFFSET UNITYSDK_OFFSET(0x28A1700)
#define FLATBUFFERS_FLATBUFFERBUILDER_NOTNESTED_OFFSET UNITYSDK_OFFSET(0x28A1690)
#define FLATBUFFERS_FLATBUFFERBUILDER_STARTOBJECT_OFFSET UNITYSDK_OFFSET(0x28A1750)
#define FLATBUFFERS_FLATBUFFERBUILDER_SLOT_OFFSET UNITYSDK_OFFSET(0x28A1880)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_OFFSET UNITYSDK_OFFSET(0x28A1920)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_OFFSET UNITYSDK_OFFSET(0x28A19B0)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_OFFSET UNITYSDK_OFFSET(0x28A1A20)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_OFFSET UNITYSDK_OFFSET(0x28A1A90)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_OFFSET UNITYSDK_OFFSET(0x28A1B00)
#define FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_OFFSET UNITYSDK_OFFSET(0x28A1B80)
#define FLATBUFFERS_FLATBUFFERBUILDER_ENDOBJECT_OFFSET UNITYSDK_OFFSET(0x28A1BC0)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x28A2010)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x28A20D0)
#define FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_OFFSET UNITYSDK_OFFSET(0x28A2110)

namespace FlatBuffers
{
	inline static constexpr unsigned int FlatBufferBuilder_TypeDefinitionIndex = 38037;

	class FlatBufferBuilder : public Il2CppObject
	{
	public:
		::System::Int32 _space; // 0x10
		::FlatBuffers::ByteBuffer* _bb; // 0x18
		::System::Int32 _minAlign; // 0x20
		::Il2CppArray<::System::Object*>* _vtable; // 0x28
		::System::Int32 _vtableSize; // 0x30
		::System::Int32 _objectStart; // 0x34
		::Il2CppArray<::System::Object*>* _vtables; // 0x38
		::System::Int32 _numVtables; // 0x40
		::System::Int32 _vectorNumElems; // 0x44
		::System::Boolean _ForceDefaults_k__BackingField; // 0x48

		::System::Boolean get_ForceDefaults()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_GET_FORCEDEFAULTS_OFFSET))(nullptr);
		}

		::System::Int32 get_Offset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::Void Pad(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PAD_OFFSET))(arg, nullptr);
		}

		::System::Void GrowBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_GROWBUFFER_OFFSET))(nullptr);
		}

		::System::Void Prep(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PREP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutBool(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTBOOL_OFFSET))(arg, nullptr);
		}

		::System::Void PutSbyte(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void PutShort(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTSHORT_OFFSET))(arg, nullptr);
		}

		::System::Void PutInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTINT_OFFSET))(arg, nullptr);
		}

		::System::Void PutUint(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTUINT_OFFSET))(arg, nullptr);
		}

		::System::Void PutLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTLONG_OFFSET))(arg, nullptr);
		}

		::System::Void PutFloat(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_PUTFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddBool(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSbyte(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void AddShort(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDSHORT_OFFSET))(arg, nullptr);
		}

		::System::Void AddInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_OFFSET))(arg, nullptr);
		}

		::System::Void AddUint(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_OFFSET))(arg, nullptr);
		}

		::System::Void AddLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_OFFSET))(arg, nullptr);
		}

		::System::Void AddFloat(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void StartVector(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_STARTVECTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* EndVector()
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ENDVECTOR_OFFSET))(nullptr);
		}

		::System::Void NotNested()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_NOTNESTED_OFFSET))(nullptr);
		}

		::System::Void StartObject(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_STARTOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Slot(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_SLOT_OFFSET))(arg, nullptr);
		}

		::System::Void AddBool(::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDBOOL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddInt(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddUint(::System::Int32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDUINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddLong(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDLONG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddFloat(::System::Int32 arg, ::System::Single arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDFLOAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddOffset(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ADDOFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EndObject()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_ENDOBJECT_OFFSET))(nullptr);
		}

		::System::Void Finish(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finish(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISH_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSizePrefixed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_FLATBUFFERBUILDER_FINISHSIZEPREFIXED_OFFSET))(arg, nullptr);
		}

	};
}

