#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstConquestExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_CONSTCONQUESTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD03C60)
#define FLATDATA_CONSTCONQUESTEXCEL_GETROOTASCONSTCONQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD03C70)
#define FLATDATA_CONSTCONQUESTEXCEL_GETROOTASCONSTCONQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD03CD0)
#define FLATDATA_CONSTCONQUESTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD03D30)
#define FLATDATA_CONSTCONQUESTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD03980)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_MANAGEUNITCHANGE_OFFSET UNITYSDK_OFFSET(0xD03D50)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_MANAGEUNITCHANGE_OFFSET UNITYSDK_OFFSET(0xD03DA0)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ASSISTCOUNT_OFFSET UNITYSDK_OFFSET(0xD03E20)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ASSISTCOUNT_OFFSET UNITYSDK_OFFSET(0xD03E70)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD03EF0)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD03F40)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0xD03FC0)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0xD04010)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0xD04090)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0xD040E0)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITDELAY_OFFSET UNITYSDK_OFFSET(0xD04160)
#define FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITDELAY_OFFSET UNITYSDK_OFFSET(0xD041B0)
#define FLATDATA_CONSTCONQUESTEXCEL_CREATECONSTCONQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD04230)
#define FLATDATA_CONSTCONQUESTEXCEL_STARTCONSTCONQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD044D0)
#define FLATDATA_CONSTCONQUESTEXCEL_ADDMANAGEUNITCHANGE_OFFSET UNITYSDK_OFFSET(0xD04450)
#define FLATDATA_CONSTCONQUESTEXCEL_ADDASSISTCOUNT_OFFSET UNITYSDK_OFFSET(0xD04420)
#define FLATDATA_CONSTCONQUESTEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET UNITYSDK_OFFSET(0xD043F0)
#define FLATDATA_CONSTCONQUESTEXCEL_ADDANIMATIONUNITAMOUNTMIN_OFFSET UNITYSDK_OFFSET(0xD043C0)
#define FLATDATA_CONSTCONQUESTEXCEL_ADDANIMATIONUNITAMOUNTMAX_OFFSET UNITYSDK_OFFSET(0xD04390)
#define FLATDATA_CONSTCONQUESTEXCEL_ADDANIMATIONUNITDELAY_OFFSET UNITYSDK_OFFSET(0xD04360)
#define FLATDATA_CONSTCONQUESTEXCEL_ENDCONSTCONQUESTEXCEL_OFFSET UNITYSDK_OFFSET(0xD04480)

namespace FlatData
{
	inline static constexpr unsigned int ConstConquestExcel_TypeDefinitionIndex = 9217;

	class ConstConquestExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstConquestExcel* GetRootAsConstConquestExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstConquestExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GETROOTASCONSTCONQUESTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstConquestExcel* GetRootAsConstConquestExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstConquestExcel* arg2)
		{
			return ((::FlatData::ConstConquestExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstConquestExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GETROOTASCONSTCONQUESTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstConquestExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstConquestExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_manageUnitChange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_MANAGEUNITCHANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_ManageUnitChange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_MANAGEUNITCHANGE_OFFSET))(nullptr);
		}

		::System::Int32 get_assistCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ASSISTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_AssistCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ASSISTCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_playTimeLimitInSeconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayTimeLimitInSeconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_PLAYTIMELIMITINSECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_animationUnitAmountMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_AnimationUnitAmountMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_animationUnitAmountMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_AnimationUnitAmountMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITAMOUNTMAX_OFFSET))(nullptr);
		}

		::System::Single get_animationUnitDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITDELAY_OFFSET))(nullptr);
		}

		::System::Single get_AnimationUnitDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_GET_ANIMATIONUNITDELAY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstConquestExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Single arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_CREATECONSTCONQUESTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartConstConquestExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_STARTCONSTCONQUESTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddManageUnitChange(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_ADDMANAGEUNITCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAssistCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_ADDASSISTCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPlayTimeLimitInSeconds(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_ADDPLAYTIMELIMITINSECONDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAnimationUnitAmountMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_ADDANIMATIONUNITAMOUNTMIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAnimationUnitAmountMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_ADDANIMATIONUNITAMOUNTMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAnimationUnitDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_ADDANIMATIONUNITDELAY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstConquestExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONQUESTEXCEL_ENDCONSTCONQUESTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

