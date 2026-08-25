#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class PropMotion; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_PROPMOTION_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD53E50)
#define FLATDATA_PROPMOTION_GETROOTASPROPMOTION_OFFSET UNITYSDK_OFFSET(0xD53E60)
#define FLATDATA_PROPMOTION_GETROOTASPROPMOTION_OFFSET UNITYSDK_OFFSET(0xD53EC0)
#define FLATDATA_PROPMOTION___INIT_OFFSET UNITYSDK_OFFSET(0xD53F50)
#define FLATDATA_PROPMOTION___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD53F20)
#define FLATDATA_PROPMOTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD53F70)
#define FLATDATA_PROPMOTION_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD53FB0)
#define FLATDATA_PROPMOTION_POSITIONS_OFFSET UNITYSDK_OFFSET(0xD53FD0)
#define FLATDATA_PROPMOTION_GET_POSITIONSLENGTH_OFFSET UNITYSDK_OFFSET(0xD540A0)
#define FLATDATA_PROPMOTION_ROTATIONS_OFFSET UNITYSDK_OFFSET(0xD540E0)
#define FLATDATA_PROPMOTION_GET_ROTATIONSLENGTH_OFFSET UNITYSDK_OFFSET(0xD541B0)
#define FLATDATA_PROPMOTION_CREATEPROPMOTION_OFFSET UNITYSDK_OFFSET(0xD541F0)
#define FLATDATA_PROPMOTION_STARTPROPMOTION_OFFSET UNITYSDK_OFFSET(0xD54380)
#define FLATDATA_PROPMOTION_ADDNAME_OFFSET UNITYSDK_OFFSET(0xD54300)
#define FLATDATA_PROPMOTION_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0xD542D0)
#define FLATDATA_PROPMOTION_CREATEPOSITIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD543A0)
#define FLATDATA_PROPMOTION_STARTPOSITIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD54430)
#define FLATDATA_PROPMOTION_ADDROTATIONS_OFFSET UNITYSDK_OFFSET(0xD542A0)
#define FLATDATA_PROPMOTION_CREATEROTATIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD54470)
#define FLATDATA_PROPMOTION_STARTROTATIONSVECTOR_OFFSET UNITYSDK_OFFSET(0xD54500)
#define FLATDATA_PROPMOTION_ENDPROPMOTION_OFFSET UNITYSDK_OFFSET(0xD54330)

namespace FlatData
{
	inline static constexpr unsigned int PropMotion_TypeDefinitionIndex = 9315;

	class PropMotion : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::PropMotion* GetRootAsPropMotion(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::PropMotion*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_GETROOTASPROPMOTION_OFFSET))(arg, nullptr);
		}

		::FlatData::PropMotion* GetRootAsPropMotion(::FlatBuffers::ByteBuffer* arg, ::FlatData::PropMotion* arg2)
		{
			return ((::FlatData::PropMotion*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::PropMotion*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_GETROOTASPROPMOTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::PropMotion* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::PropMotion*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_GETNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* Positions(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_POSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PositionsLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_GET_POSITIONSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* Rotations(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_ROTATIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RotationsLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_GET_ROTATIONSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePropMotion(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2, ::FlatBuffers::VectorOffset* arg3, ::FlatBuffers::VectorOffset* arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_CREATEPROPMOTION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartPropMotion(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_STARTPROPMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPositions(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_ADDPOSITIONS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePositionsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_CREATEPOSITIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartPositionsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_STARTPOSITIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRotations(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_ADDROTATIONS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRotationsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_CREATEROTATIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRotationsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_STARTROTATIONSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndPropMotion(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_PROPMOTION_ENDPROPMOTION_OFFSET))(arg, nullptr);
		}

	};
}

