#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class RootMotionFlat; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ROOTMOTIONFLAT_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD578C0)
#define FLATDATA_ROOTMOTIONFLAT_GETROOTASROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD578D0)
#define FLATDATA_ROOTMOTIONFLAT_GETROOTASROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD57930)
#define FLATDATA_ROOTMOTIONFLAT___INIT_OFFSET UNITYSDK_OFFSET(0xD579C0)
#define FLATDATA_ROOTMOTIONFLAT___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD57990)
#define FLATDATA_ROOTMOTIONFLAT_FORMS_OFFSET UNITYSDK_OFFSET(0xD579E0)
#define FLATDATA_ROOTMOTIONFLAT_GET_FORMSLENGTH_OFFSET UNITYSDK_OFFSET(0xD57AB0)
#define FLATDATA_ROOTMOTIONFLAT_EXSKILLS_OFFSET UNITYSDK_OFFSET(0xD57AF0)
#define FLATDATA_ROOTMOTIONFLAT_GET_EXSKILLSLENGTH_OFFSET UNITYSDK_OFFSET(0xD57BC0)
#define FLATDATA_ROOTMOTIONFLAT_GET_MOVELEFT_OFFSET UNITYSDK_OFFSET(0xD57C00)
#define FLATDATA_ROOTMOTIONFLAT_GET_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0xD57CB0)
#define FLATDATA_ROOTMOTIONFLAT_CREATEROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD57D60)
#define FLATDATA_ROOTMOTIONFLAT_STARTROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD57F50)
#define FLATDATA_ROOTMOTIONFLAT_ADDFORMS_OFFSET UNITYSDK_OFFSET(0xD57ED0)
#define FLATDATA_ROOTMOTIONFLAT_CREATEFORMSVECTOR_OFFSET UNITYSDK_OFFSET(0xD57F70)
#define FLATDATA_ROOTMOTIONFLAT_STARTFORMSVECTOR_OFFSET UNITYSDK_OFFSET(0xD58000)
#define FLATDATA_ROOTMOTIONFLAT_ADDEXSKILLS_OFFSET UNITYSDK_OFFSET(0xD57EA0)
#define FLATDATA_ROOTMOTIONFLAT_CREATEEXSKILLSVECTOR_OFFSET UNITYSDK_OFFSET(0xD58040)
#define FLATDATA_ROOTMOTIONFLAT_STARTEXSKILLSVECTOR_OFFSET UNITYSDK_OFFSET(0xD580D0)
#define FLATDATA_ROOTMOTIONFLAT_ADDMOVELEFT_OFFSET UNITYSDK_OFFSET(0xD57E70)
#define FLATDATA_ROOTMOTIONFLAT_ADDMOVERIGHT_OFFSET UNITYSDK_OFFSET(0xD57E40)
#define FLATDATA_ROOTMOTIONFLAT_ENDROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0xD57F00)
#define FLATDATA_ROOTMOTIONFLAT_FINISHROOTMOTIONFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD58110)
#define FLATDATA_ROOTMOTIONFLAT_FINISHSIZEPREFIXEDROOTMOTIONFLATBUFFER_OFFSET UNITYSDK_OFFSET(0xD58130)

namespace FlatData
{
	inline static constexpr unsigned int RootMotionFlat_TypeDefinitionIndex = 9325;

	class RootMotionFlat : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::RootMotionFlat* GetRootAsRootMotionFlat(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::RootMotionFlat*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_GETROOTASROOTMOTIONFLAT_OFFSET))(arg, nullptr);
		}

		::FlatData::RootMotionFlat* GetRootAsRootMotionFlat(::FlatBuffers::ByteBuffer* arg, ::FlatData::RootMotionFlat* arg2)
		{
			return ((::FlatData::RootMotionFlat*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::RootMotionFlat*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_GETROOTASROOTMOTIONFLAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::RootMotionFlat* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::RootMotionFlat*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* Forms(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_FORMS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FormsLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_GET_FORMSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* ExSkills(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_EXSKILLS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillsLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_GET_EXSKILLSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* get_MoveLeft()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_GET_MOVELEFT_OFFSET))(nullptr);
		}

		Il2CppObject* get_MoveRight()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_GET_MOVERIGHT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRootMotionFlat(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2, ::FlatBuffers::VectorOffset* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_CREATEROOTMOTIONFLAT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartRootMotionFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_STARTROOTMOTIONFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddForms(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_ADDFORMS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFormsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_CREATEFORMSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFormsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_STARTFORMSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddExSkills(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_ADDEXSKILLS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateExSkillsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_CREATEEXSKILLSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartExSkillsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_STARTEXSKILLSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMoveLeft(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_ADDMOVELEFT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMoveRight(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_ADDMOVERIGHT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndRootMotionFlat(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_ENDROOTMOTIONFLAT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRootMotionFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_FINISHROOTMOTIONFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedRootMotionFlatBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ROOTMOTIONFLAT_FINISHSIZEPREFIXEDROOTMOTIONFLATBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

