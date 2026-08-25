#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class Form; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_FORM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD574E0)
#define FLATDATA_FORM_GETROOTASFORM_OFFSET UNITYSDK_OFFSET(0xD574F0)
#define FLATDATA_FORM_GETROOTASFORM_OFFSET UNITYSDK_OFFSET(0xD57550)
#define FLATDATA_FORM___INIT_OFFSET UNITYSDK_OFFSET(0xD575E0)
#define FLATDATA_FORM___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD575B0)
#define FLATDATA_FORM_GET_MOVEEND_OFFSET UNITYSDK_OFFSET(0xD57600)
#define FLATDATA_FORM_GET_PUBLICSKILL_OFFSET UNITYSDK_OFFSET(0xD576B0)
#define FLATDATA_FORM_CREATEFORM_OFFSET UNITYSDK_OFFSET(0xD57760)
#define FLATDATA_FORM_STARTFORM_OFFSET UNITYSDK_OFFSET(0xD578A0)
#define FLATDATA_FORM_ADDMOVEEND_OFFSET UNITYSDK_OFFSET(0xD57820)
#define FLATDATA_FORM_ADDPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0xD577F0)
#define FLATDATA_FORM_ENDFORM_OFFSET UNITYSDK_OFFSET(0xD57850)

namespace FlatData
{
	inline static constexpr unsigned int Form_TypeDefinitionIndex = 9324;

	class Form : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::Form* GetRootAsForm(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::Form*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_GETROOTASFORM_OFFSET))(arg, nullptr);
		}

		::FlatData::Form* GetRootAsForm(::FlatBuffers::ByteBuffer* arg, ::FlatData::Form* arg2)
		{
			return ((::FlatData::Form*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::Form*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_GETROOTASFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::Form* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::Form*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_MoveEnd()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_GET_MOVEEND_OFFSET))(nullptr);
		}

		Il2CppObject* get_PublicSkill()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_GET_PUBLICSKILL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateForm(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_CREATEFORM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void StartForm(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_STARTFORM_OFFSET))(arg, nullptr);
		}

		::System::Void AddMoveEnd(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_ADDMOVEEND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPublicSkill(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_ADDPUBLICSKILL_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndForm(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FORM_ENDFORM_OFFSET))(arg, nullptr);
		}

	};
}

