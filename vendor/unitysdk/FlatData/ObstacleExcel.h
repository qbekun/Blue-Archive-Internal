#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ObstacleExcel; }
namespace FlatData { class ObstacleDestroyType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_OBSTACLEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD526B0)
#define FLATDATA_OBSTACLEEXCEL_GETROOTASOBSTACLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD526C0)
#define FLATDATA_OBSTACLEEXCEL_GETROOTASOBSTACLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD52720)
#define FLATDATA_OBSTACLEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD52780)
#define FLATDATA_OBSTACLEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD52420)
#define FLATDATA_OBSTACLEEXCEL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xD527A0)
#define FLATDATA_OBSTACLEEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0xD527F0)
#define FLATDATA_OBSTACLEEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD52830)
#define FLATDATA_OBSTACLEEXCEL_GET_JUMPABLE_OFFSET UNITYSDK_OFFSET(0xD52850)
#define FLATDATA_OBSTACLEEXCEL_SUBOFFSET_OFFSET UNITYSDK_OFFSET(0xD528A0)
#define FLATDATA_OBSTACLEEXCEL_GET_SUBOFFSETLENGTH_OFFSET UNITYSDK_OFFSET(0xD52900)
#define FLATDATA_OBSTACLEEXCEL_GETSUBOFFSETBYTES_OFFSET UNITYSDK_OFFSET(0xD52940)
#define FLATDATA_OBSTACLEEXCEL_GET_X_OFFSET UNITYSDK_OFFSET(0xD52960)
#define FLATDATA_OBSTACLEEXCEL_GET_Z_OFFSET UNITYSDK_OFFSET(0xD529B0)
#define FLATDATA_OBSTACLEEXCEL_GET_HP_OFFSET UNITYSDK_OFFSET(0xD52A00)
#define FLATDATA_OBSTACLEEXCEL_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xD52A50)
#define FLATDATA_OBSTACLEEXCEL_GET_BLOCKRATE_OFFSET UNITYSDK_OFFSET(0xD52AA0)
#define FLATDATA_OBSTACLEEXCEL_GET_EVASIONRATE_OFFSET UNITYSDK_OFFSET(0xD52AF0)
#define FLATDATA_OBSTACLEEXCEL_GET_DESTROYTYPE_OFFSET UNITYSDK_OFFSET(0xD52B40)
#define FLATDATA_OBSTACLEEXCEL_POINT1OFFESET_OFFSET UNITYSDK_OFFSET(0xD52B90)
#define FLATDATA_OBSTACLEEXCEL_GET_POINT1OFFESETLENGTH_OFFSET UNITYSDK_OFFSET(0xD52BF0)
#define FLATDATA_OBSTACLEEXCEL_GETPOINT1OFFESETBYTES_OFFSET UNITYSDK_OFFSET(0xD52C30)
#define FLATDATA_OBSTACLEEXCEL_ENEMYPOINT1OSSET_OFFSET UNITYSDK_OFFSET(0xD52C50)
#define FLATDATA_OBSTACLEEXCEL_GET_ENEMYPOINT1OSSETLENGTH_OFFSET UNITYSDK_OFFSET(0xD52CB0)
#define FLATDATA_OBSTACLEEXCEL_GETENEMYPOINT1OSSETBYTES_OFFSET UNITYSDK_OFFSET(0xD52CF0)
#define FLATDATA_OBSTACLEEXCEL_POINT2OFFESET_OFFSET UNITYSDK_OFFSET(0xD52D10)
#define FLATDATA_OBSTACLEEXCEL_GET_POINT2OFFESETLENGTH_OFFSET UNITYSDK_OFFSET(0xD52D70)
#define FLATDATA_OBSTACLEEXCEL_GETPOINT2OFFESETBYTES_OFFSET UNITYSDK_OFFSET(0xD52DB0)
#define FLATDATA_OBSTACLEEXCEL_ENEMYPOINT2OSSET_OFFSET UNITYSDK_OFFSET(0xD52DD0)
#define FLATDATA_OBSTACLEEXCEL_GET_ENEMYPOINT2OSSETLENGTH_OFFSET UNITYSDK_OFFSET(0xD52E30)
#define FLATDATA_OBSTACLEEXCEL_GETENEMYPOINT2OSSETBYTES_OFFSET UNITYSDK_OFFSET(0xD52E70)
#define FLATDATA_OBSTACLEEXCEL_SUBOBSTACLEID_OFFSET UNITYSDK_OFFSET(0xD52E90)
#define FLATDATA_OBSTACLEEXCEL_GET_SUBOBSTACLEIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD52EF0)
#define FLATDATA_OBSTACLEEXCEL_GETSUBOBSTACLEIDBYTES_OFFSET UNITYSDK_OFFSET(0xD52F30)
#define FLATDATA_OBSTACLEEXCEL_CREATEOBSTACLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD52F50)
#define FLATDATA_OBSTACLEEXCEL_STARTOBSTACLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD53570)
#define FLATDATA_OBSTACLEEXCEL_ADDINDEX_OFFSET UNITYSDK_OFFSET(0xD53280)
#define FLATDATA_OBSTACLEEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0xD534C0)
#define FLATDATA_OBSTACLEEXCEL_ADDJUMPABLE_OFFSET UNITYSDK_OFFSET(0xD534F0)
#define FLATDATA_OBSTACLEEXCEL_ADDSUBOFFSET_OFFSET UNITYSDK_OFFSET(0xD53490)
#define FLATDATA_OBSTACLEEXCEL_CREATESUBOFFSETVECTOR_OFFSET UNITYSDK_OFFSET(0xD53590)
#define FLATDATA_OBSTACLEEXCEL_STARTSUBOFFSETVECTOR_OFFSET UNITYSDK_OFFSET(0xD53620)
#define FLATDATA_OBSTACLEEXCEL_ADDX_OFFSET UNITYSDK_OFFSET(0xD53460)
#define FLATDATA_OBSTACLEEXCEL_ADDZ_OFFSET UNITYSDK_OFFSET(0xD53430)
#define FLATDATA_OBSTACLEEXCEL_ADDHP_OFFSET UNITYSDK_OFFSET(0xD53250)
#define FLATDATA_OBSTACLEEXCEL_ADDMAXHP_OFFSET UNITYSDK_OFFSET(0xD53220)
#define FLATDATA_OBSTACLEEXCEL_ADDBLOCKRATE_OFFSET UNITYSDK_OFFSET(0xD53400)
#define FLATDATA_OBSTACLEEXCEL_ADDEVASIONRATE_OFFSET UNITYSDK_OFFSET(0xD533D0)
#define FLATDATA_OBSTACLEEXCEL_ADDDESTROYTYPE_OFFSET UNITYSDK_OFFSET(0xD533A0)
#define FLATDATA_OBSTACLEEXCEL_ADDPOINT1OFFESET_OFFSET UNITYSDK_OFFSET(0xD53370)
#define FLATDATA_OBSTACLEEXCEL_CREATEPOINT1OFFESETVECTOR_OFFSET UNITYSDK_OFFSET(0xD53660)
#define FLATDATA_OBSTACLEEXCEL_STARTPOINT1OFFESETVECTOR_OFFSET UNITYSDK_OFFSET(0xD536F0)
#define FLATDATA_OBSTACLEEXCEL_ADDENEMYPOINT1OSSET_OFFSET UNITYSDK_OFFSET(0xD53340)
#define FLATDATA_OBSTACLEEXCEL_CREATEENEMYPOINT1OSSETVECTOR_OFFSET UNITYSDK_OFFSET(0xD53730)
#define FLATDATA_OBSTACLEEXCEL_STARTENEMYPOINT1OSSETVECTOR_OFFSET UNITYSDK_OFFSET(0xD537C0)
#define FLATDATA_OBSTACLEEXCEL_ADDPOINT2OFFESET_OFFSET UNITYSDK_OFFSET(0xD53310)
#define FLATDATA_OBSTACLEEXCEL_CREATEPOINT2OFFESETVECTOR_OFFSET UNITYSDK_OFFSET(0xD53800)
#define FLATDATA_OBSTACLEEXCEL_STARTPOINT2OFFESETVECTOR_OFFSET UNITYSDK_OFFSET(0xD53890)
#define FLATDATA_OBSTACLEEXCEL_ADDENEMYPOINT2OSSET_OFFSET UNITYSDK_OFFSET(0xD532E0)
#define FLATDATA_OBSTACLEEXCEL_CREATEENEMYPOINT2OSSETVECTOR_OFFSET UNITYSDK_OFFSET(0xD538D0)
#define FLATDATA_OBSTACLEEXCEL_STARTENEMYPOINT2OSSETVECTOR_OFFSET UNITYSDK_OFFSET(0xD53960)
#define FLATDATA_OBSTACLEEXCEL_ADDSUBOBSTACLEID_OFFSET UNITYSDK_OFFSET(0xD532B0)
#define FLATDATA_OBSTACLEEXCEL_CREATESUBOBSTACLEIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD539A0)
#define FLATDATA_OBSTACLEEXCEL_STARTSUBOBSTACLEIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD53A30)
#define FLATDATA_OBSTACLEEXCEL_ENDOBSTACLEEXCEL_OFFSET UNITYSDK_OFFSET(0xD53520)

namespace FlatData
{
	inline static constexpr unsigned int ObstacleExcel_TypeDefinitionIndex = 9313;

	class ObstacleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ObstacleExcel* GetRootAsObstacleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ObstacleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETROOTASOBSTACLEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ObstacleExcel* GetRootAsObstacleExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ObstacleExcel* arg2)
		{
			return ((::FlatData::ObstacleExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ObstacleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETROOTASOBSTACLEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ObstacleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ObstacleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Index()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_INDEX_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_JumpAble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_JUMPABLE_OFFSET))(nullptr);
		}

		::System::Single SubOffset(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_SUBOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SubOffsetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_SUBOFFSETLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubOffsetBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETSUBOFFSETBYTES_OFFSET))(nullptr);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_X_OFFSET))(nullptr);
		}

		::System::Single get_Z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_Z_OFFSET))(nullptr);
		}

		::System::Int64 get_Hp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_HP_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_MAXHP_OFFSET))(nullptr);
		}

		::System::Int32 get_BlockRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_BLOCKRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_EvasionRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_EVASIONRATE_OFFSET))(nullptr);
		}

		::FlatData::ObstacleDestroyType* get_DestroyType()
		{
			return ((::FlatData::ObstacleDestroyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_DESTROYTYPE_OFFSET))(nullptr);
		}

		::System::Single Point1Offeset(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_POINT1OFFESET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Point1OffesetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_POINT1OFFESETLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPoint1OffesetBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETPOINT1OFFESETBYTES_OFFSET))(nullptr);
		}

		::System::Single EnemyPoint1Osset(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ENEMYPOINT1OSSET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyPoint1OssetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_ENEMYPOINT1OSSETLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyPoint1OssetBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETENEMYPOINT1OSSETBYTES_OFFSET))(nullptr);
		}

		::System::Single Point2Offeset(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_POINT2OFFESET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Point2OffesetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_POINT2OFFESETLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPoint2OffesetBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETPOINT2OFFESETBYTES_OFFSET))(nullptr);
		}

		::System::Single EnemyPoint2Osset(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ENEMYPOINT2OSSET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EnemyPoint2OssetLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_ENEMYPOINT2OSSETLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyPoint2OssetBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETENEMYPOINT2OSSETBYTES_OFFSET))(nullptr);
		}

		::System::Int64 SubObstacleID(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_SUBOBSTACLEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SubObstacleIDLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GET_SUBOBSTACLEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSubObstacleIDBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_GETSUBOBSTACLEIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateObstacleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::System::Boolean arg4, ::FlatBuffers::VectorOffset* arg5, ::System::Single arg6, ::System::Single arg7, ::System::Int64 arg8, ::System::Int64 arg9, ::System::Int32 arg10, ::System::Int32 arg11, ::FlatData::ObstacleDestroyType* arg12, ::FlatBuffers::VectorOffset* arg13, ::FlatBuffers::VectorOffset* arg14, ::FlatBuffers::VectorOffset* arg15, ::FlatBuffers::VectorOffset* arg16, ::FlatBuffers::VectorOffset* arg17)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::System::Single, ::System::Single, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatData::ObstacleDestroyType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_CREATEOBSTACLEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, nullptr);
		}

		::System::Void StartObstacleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_STARTOBSTACLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDPREFABNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddJumpAble(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDJUMPABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSubOffset(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDSUBOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSubOffsetVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_CREATESUBOFFSETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartSubOffsetVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_STARTSUBOFFSETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddZ(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDZ_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDHP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMaxHp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDMAXHP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBlockRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDBLOCKRATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEvasionRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDEVASIONRATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDestroyType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ObstacleDestroyType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ObstacleDestroyType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDDESTROYTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPoint1Offeset(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDPOINT1OFFESET_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePoint1OffesetVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_CREATEPOINT1OFFESETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartPoint1OffesetVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_STARTPOINT1OFFESETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEnemyPoint1Osset(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDENEMYPOINT1OSSET_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnemyPoint1OssetVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_CREATEENEMYPOINT1OSSETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEnemyPoint1OssetVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_STARTENEMYPOINT1OSSETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPoint2Offeset(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDPOINT2OFFESET_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePoint2OffesetVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_CREATEPOINT2OFFESETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartPoint2OffesetVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_STARTPOINT2OFFESETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEnemyPoint2Osset(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDENEMYPOINT2OSSET_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateEnemyPoint2OssetVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_CREATEENEMYPOINT2OSSETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartEnemyPoint2OssetVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_STARTENEMYPOINT2OSSETVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSubObstacleID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ADDSUBOBSTACLEID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSubObstacleIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_CREATESUBOBSTACLEIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartSubObstacleIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_STARTSUBOBSTACLEIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndObstacleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCEL_ENDOBSTACLEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

