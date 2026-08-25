#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstKeyMappingExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD07740)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GETROOTASCONSTKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD07750)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GETROOTASCONSTKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD077B0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD07810)
#define FLATDATA_CONSTKEYMAPPINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD07460)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_DRAGSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD07830)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_DRAGSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD07880)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD07900)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD07950)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCCONTROLLERINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD079D0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCCONTROLLERINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD07A20)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_SCROLLWHEELFACTOR_OFFSET UNITYSDK_OFFSET(0xD07AA0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_SCROLLWHEELFACTOR_OFFSET UNITYSDK_OFFSET(0xD07AF0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_REMOVEKEYCODEWORD_OFFSET UNITYSDK_OFFSET(0xD07B70)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_REMOVEKEYCODEWORD_OFFSET UNITYSDK_OFFSET(0xD07BB0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GETREMOVEKEYCODEWORDBYTES_OFFSET UNITYSDK_OFFSET(0xD07C20)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_TUTORIALDIALOGTOUCHKEY_OFFSET UNITYSDK_OFFSET(0xD07C40)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_TUTORIALDIALOGTOUCHKEY_OFFSET UNITYSDK_OFFSET(0xD07C80)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GETTUTORIALDIALOGTOUCHKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD07CF0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORSLOW_OFFSET UNITYSDK_OFFSET(0xD07D10)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORSLOW_OFFSET UNITYSDK_OFFSET(0xD07D60)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTOR_OFFSET UNITYSDK_OFFSET(0xD07DE0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTOR_OFFSET UNITYSDK_OFFSET(0xD07E30)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORFAST_OFFSET UNITYSDK_OFFSET(0xD07EB0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORFAST_OFFSET UNITYSDK_OFFSET(0xD07F00)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONSEC_OFFSET UNITYSDK_OFFSET(0xD07F80)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONSEC_OFFSET UNITYSDK_OFFSET(0xD07FD0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONPOWER_OFFSET UNITYSDK_OFFSET(0xD08050)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONPOWER_OFFSET UNITYSDK_OFFSET(0xD080A0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLWHEELFACTOR_OFFSET UNITYSDK_OFFSET(0xD08120)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLWHEELFACTOR_OFFSET UNITYSDK_OFFSET(0xD08170)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERZOOMSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD081F0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERZOOMSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD08240)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEX_OFFSET UNITYSDK_OFFSET(0xD082C0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEX_OFFSET UNITYSDK_OFFSET(0xD08310)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEY_OFFSET UNITYSDK_OFFSET(0xD08390)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEY_OFFSET UNITYSDK_OFFSET(0xD083E0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORCLICKSCALE_OFFSET UNITYSDK_OFFSET(0xD08460)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORCLICKSCALE_OFFSET UNITYSDK_OFFSET(0xD084B0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD08530)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD08580)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_CREATECONSTKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD08600)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_STARTCONSTKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD08CF0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDDRAGSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD08C70)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDPCINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD089A0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDPCCONTROLLERINFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0xD08970)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDSCROLLWHEELFACTOR_OFFSET UNITYSDK_OFFSET(0xD08C40)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDREMOVEKEYCODEWORD_OFFSET UNITYSDK_OFFSET(0xD08C10)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDTUTORIALDIALOGTOUCHKEY_OFFSET UNITYSDK_OFFSET(0xD08BE0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORFACTORSLOW_OFFSET UNITYSDK_OFFSET(0xD08BB0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORFACTOR_OFFSET UNITYSDK_OFFSET(0xD08B80)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORFACTORFAST_OFFSET UNITYSDK_OFFSET(0xD08B50)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDVIBRATIONSEC_OFFSET UNITYSDK_OFFSET(0xD08B20)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDVIBRATIONPOWER_OFFSET UNITYSDK_OFFSET(0xD08AF0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERSCROLLWHEELFACTOR_OFFSET UNITYSDK_OFFSET(0xD08AC0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERZOOMSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD08A90)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERDPADMOVECHECKRANGEX_OFFSET UNITYSDK_OFFSET(0xD08A60)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERDPADMOVECHECKRANGEY_OFFSET UNITYSDK_OFFSET(0xD08A30)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORCLICKSCALE_OFFSET UNITYSDK_OFFSET(0xD08A00)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERSCROLLSENSITIVITY_OFFSET UNITYSDK_OFFSET(0xD089D0)
#define FLATDATA_CONSTKEYMAPPINGEXCEL_ENDCONSTKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD08CA0)

namespace FlatData
{
	inline static constexpr unsigned int ConstKeyMappingExcel_TypeDefinitionIndex = 9225;

	class ConstKeyMappingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstKeyMappingExcel* GetRootAsConstKeyMappingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstKeyMappingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GETROOTASCONSTKEYMAPPINGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstKeyMappingExcel* GetRootAsConstKeyMappingExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstKeyMappingExcel* arg2)
		{
			return ((::FlatData::ConstKeyMappingExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstKeyMappingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GETROOTASCONSTKEYMAPPINGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstKeyMappingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstKeyMappingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_dragSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_DRAGSENSITIVITY_OFFSET))(nullptr);
		}

		::System::Single get_DragSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_DRAGSENSITIVITY_OFFSET))(nullptr);
		}

		::System::Int64 get_pcInformationGroupID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCINFORMATIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PcInformationGroupID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCINFORMATIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_pcControllerInformationGroupID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCCONTROLLERINFORMATIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_PcControllerInformationGroupID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_PCCONTROLLERINFORMATIONGROUPID_OFFSET))(nullptr);
		}

		::System::Single get_scrollWheelFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_SCROLLWHEELFACTOR_OFFSET))(nullptr);
		}

		::System::Single get_ScrollWheelFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_SCROLLWHEELFACTOR_OFFSET))(nullptr);
		}

		::System::String* get_removeKeycodeWord()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_REMOVEKEYCODEWORD_OFFSET))(nullptr);
		}

		::System::String* get_RemoveKeycodeWord()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_REMOVEKEYCODEWORD_OFFSET))(nullptr);
		}

		Il2CppObject* GetRemoveKeycodeWordBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GETREMOVEKEYCODEWORDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_tutorialDialogTouchKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_TUTORIALDIALOGTOUCHKEY_OFFSET))(nullptr);
		}

		::System::String* get_TutorialDialogTouchKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_TUTORIALDIALOGTOUCHKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetTutorialDialogTouchKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GETTUTORIALDIALOGTOUCHKEYBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_controllerCursorFactorSlow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORSLOW_OFFSET))(nullptr);
		}

		::System::Int32 get_ControllerCursorFactorSlow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORSLOW_OFFSET))(nullptr);
		}

		::System::Int32 get_controllerCursorFactor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ControllerCursorFactor()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_controllerCursorFactorFast()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORFAST_OFFSET))(nullptr);
		}

		::System::Int32 get_ControllerCursorFactorFast()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORFACTORFAST_OFFSET))(nullptr);
		}

		::System::Single get_vibrationSec()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONSEC_OFFSET))(nullptr);
		}

		::System::Single get_VibrationSec()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONSEC_OFFSET))(nullptr);
		}

		::System::Single get_vibrationPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONPOWER_OFFSET))(nullptr);
		}

		::System::Single get_VibrationPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_VIBRATIONPOWER_OFFSET))(nullptr);
		}

		::System::Single get_controllerScrollWheelFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLWHEELFACTOR_OFFSET))(nullptr);
		}

		::System::Single get_ControllerScrollWheelFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLWHEELFACTOR_OFFSET))(nullptr);
		}

		::System::Single get_controllerZoomSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERZOOMSENSITIVITY_OFFSET))(nullptr);
		}

		::System::Single get_ControllerZoomSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERZOOMSENSITIVITY_OFFSET))(nullptr);
		}

		::System::Single get_controllerDpadMoveCheckRangeX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEX_OFFSET))(nullptr);
		}

		::System::Single get_ControllerDpadMoveCheckRangeX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEX_OFFSET))(nullptr);
		}

		::System::Single get_controllerDpadMoveCheckRangeY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEY_OFFSET))(nullptr);
		}

		::System::Single get_ControllerDpadMoveCheckRangeY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERDPADMOVECHECKRANGEY_OFFSET))(nullptr);
		}

		::System::Single get_controllerCursorClickScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORCLICKSCALE_OFFSET))(nullptr);
		}

		::System::Single get_ControllerCursorClickScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERCURSORCLICKSCALE_OFFSET))(nullptr);
		}

		::System::Single get_controllerScrollSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLSENSITIVITY_OFFSET))(nullptr);
		}

		::System::Single get_ControllerScrollSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_GET_CONTROLLERSCROLLSENSITIVITY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstKeyMappingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Single arg5, ::FlatBuffers::StringOffset* arg6, ::FlatBuffers::StringOffset* arg7, ::System::Int32 arg8, ::System::Int32 arg9, ::System::Int32 arg10, ::System::Single arg11, ::System::Single arg12, ::System::Single arg13, ::System::Single arg14, ::System::Single arg15, ::System::Single arg16, ::System::Single arg17, ::System::Single arg18)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::System::Int64, ::System::Int64, ::System::Single, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_CREATECONSTKEYMAPPINGEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, nullptr);
		}

		::System::Void StartConstKeyMappingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_STARTCONSTKEYMAPPINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddDragSensitivity(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDDRAGSENSITIVITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPcInformationGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDPCINFORMATIONGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPcControllerInformationGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDPCCONTROLLERINFORMATIONGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddScrollWheelFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDSCROLLWHEELFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRemoveKeycodeWord(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDREMOVEKEYCODEWORD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTutorialDialogTouchKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDTUTORIALDIALOGTOUCHKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerCursorFactorSlow(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORFACTORSLOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerCursorFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerCursorFactorFast(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORFACTORFAST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddVibrationSec(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDVIBRATIONSEC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddVibrationPower(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDVIBRATIONPOWER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerScrollWheelFactor(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERSCROLLWHEELFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerZoomSensitivity(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERZOOMSENSITIVITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerDpadMoveCheckRangeX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERDPADMOVECHECKRANGEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerDpadMoveCheckRangeY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERDPADMOVECHECKRANGEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerCursorClickScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERCURSORCLICKSCALE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddControllerScrollSensitivity(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ADDCONTROLLERSCROLLSENSITIVITY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstKeyMappingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTKEYMAPPINGEXCEL_ENDCONSTKEYMAPPINGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

