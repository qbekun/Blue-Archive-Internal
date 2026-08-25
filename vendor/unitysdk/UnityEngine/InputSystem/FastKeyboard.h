#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class KeyControl; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class AnyKeyControl; }
namespace UnityEngine::InputSystem::Controls { class DiscreteButtonControl; }

#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM2_OFFSET UNITYSDK_OFFSET(0x9EAD6C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD2_OFFSET UNITYSDK_OFFSET(0x9EAD900)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDENTER_OFFSET UNITYSDK_OFFSET(0x9EADB50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSPACE_OFFSET UNITYSDK_OFFSET(0x9EADDB0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMLOCK_OFFSET UNITYSDK_OFFSET(0x9EAE000)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDIMESELECTED_OFFSET UNITYSDK_OFFSET(0x9EAE250)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDT_OFFSET UNITYSDK_OFFSET(0x9EAE490)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD3_OFFSET UNITYSDK_OFFSET(0x9EAE6E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDM_OFFSET UNITYSDK_OFFSET(0x9EAE930)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAUSE_OFFSET UNITYSDK_OFFSET(0x9EAEB80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDX_OFFSET UNITYSDK_OFFSET(0x9EAEDD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDS_OFFSET UNITYSDK_OFFSET(0x9EAF020)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF8_OFFSET UNITYSDK_OFFSET(0x9EAF270)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD7_OFFSET UNITYSDK_OFFSET(0x9EAF4C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDN_OFFSET UNITYSDK_OFFSET(0x9EAF700)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM4_OFFSET UNITYSDK_OFFSET(0x9EAF950)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF11_OFFSET UNITYSDK_OFFSET(0x9EAFB90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTALT_OFFSET UNITYSDK_OFFSET(0x9EAFDE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDANYKEY_OFFSET UNITYSDK_OFFSET(0x9EB0040)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDZ_OFFSET UNITYSDK_OFFSET(0x9EB0290)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD1_OFFSET UNITYSDK_OFFSET(0x9EB04E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD1_OFFSET UNITYSDK_OFFSET(0x9EB0730)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSEMICOLON_OFFSET UNITYSDK_OFFSET(0x9EB0970)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTCTRL_OFFSET UNITYSDK_OFFSET(0x9EB0BC0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF3_OFFSET UNITYSDK_OFFSET(0x9EB0E20)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDR_OFFSET UNITYSDK_OFFSET(0x9EB1070)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDD_OFFSET UNITYSDK_OFFSET(0x9EB12C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTBRACKET_OFFSET UNITYSDK_OFFSET(0x9EB1510)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTALT_OFFSET UNITYSDK_OFFSET(0x9EB1760)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKQUOTE_OFFSET UNITYSDK_OFFSET(0x9EB19C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDALT_OFFSET UNITYSDK_OFFSET(0x9EB1C10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTBRACKET_OFFSET UNITYSDK_OFFSET(0x9EB1E90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEQUALS_OFFSET UNITYSDK_OFFSET(0x9EB20E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSLASH_OFFSET UNITYSDK_OFFSET(0x9EB2330)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDG_OFFSET UNITYSDK_OFFSET(0x9EB2580)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQ_OFFSET UNITYSDK_OFFSET(0x9EB27D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD0_OFFSET UNITYSDK_OFFSET(0x9EB2A20)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMULTIPLY_OFFSET UNITYSDK_OFFSET(0x9EB2C60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF5_OFFSET UNITYSDK_OFFSET(0x9EB2EB0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDB_OFFSET UNITYSDK_OFFSET(0x9EB3100)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDC_OFFSET UNITYSDK_OFFSET(0x9EB3350)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDUPARROW_OFFSET UNITYSDK_OFFSET(0x9EB35A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADEQUALS_OFFSET UNITYSDK_OFFSET(0x9EB37F0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM3_OFFSET UNITYSDK_OFFSET(0x9EB3A40)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPRINTSCREEN_OFFSET UNITYSDK_OFFSET(0x9EB3C80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDJ_OFFSET UNITYSDK_OFFSET(0x9EB3ED0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD4_OFFSET UNITYSDK_OFFSET(0x9EB4120)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCOMMA_OFFSET UNITYSDK_OFFSET(0x9EB4370)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCONTEXTMENU_OFFSET UNITYSDK_OFFSET(0x9EB45C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEND_OFFSET UNITYSDK_OFFSET(0x9EB4820)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD8_OFFSET UNITYSDK_OFFSET(0x9EB4A70)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDK_OFFSET UNITYSDK_OFFSET(0x9EB4CC0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDP_OFFSET UNITYSDK_OFFSET(0x9EB4F10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDMINUS_OFFSET UNITYSDK_OFFSET(0x9EB5160)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQUOTE_OFFSET UNITYSDK_OFFSET(0x9EB53B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCTRL_OFFSET UNITYSDK_OFFSET(0x9EB5600)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPERIOD_OFFSET UNITYSDK_OFFSET(0x9EB5880)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD8_OFFSET UNITYSDK_OFFSET(0x9EB5AD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD0_OFFSET UNITYSDK_OFFSET(0x9EB5D10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTARROW_OFFSET UNITYSDK_OFFSET(0x9EB5F60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDV_OFFSET UNITYSDK_OFFSET(0x9EB61B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD6_OFFSET UNITYSDK_OFFSET(0x9EB6400)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF4_OFFSET UNITYSDK_OFFSET(0x9EB6640)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD5_OFFSET UNITYSDK_OFFSET(0x9EB6890)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPLUS_OFFSET UNITYSDK_OFFSET(0x9EB6AE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x9EB6D30)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCAPSLOCK_OFFSET UNITYSDK_OFFSET(0x9EB6F90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSPACE_OFFSET UNITYSDK_OFFSET(0x9EB71E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMINUS_OFFSET UNITYSDK_OFFSET(0x9EB7430)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDE_OFFSET UNITYSDK_OFFSET(0x9EB7680)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF6_OFFSET UNITYSDK_OFFSET(0x9EB78D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x9EB7B20)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSLASH_OFFSET UNITYSDK_OFFSET(0x9EB7D80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD9_OFFSET UNITYSDK_OFFSET(0x9EB7FD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD4_OFFSET UNITYSDK_OFFSET(0x9EB8210)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDO_OFFSET UNITYSDK_OFFSET(0x9EB8450)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD6_OFFSET UNITYSDK_OFFSET(0x9EB86A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDW_OFFSET UNITYSDK_OFFSET(0x9EB88F0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDU_OFFSET UNITYSDK_OFFSET(0x9EB8B40)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD2_OFFSET UNITYSDK_OFFSET(0x9EB8D90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF2_OFFSET UNITYSDK_OFFSET(0x9EB8FD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD3_OFFSET UNITYSDK_OFFSET(0x9EB9220)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF12_OFFSET UNITYSDK_OFFSET(0x9EB9460)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEDOWN_OFFSET UNITYSDK_OFFSET(0x9EB96B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD5_OFFSET UNITYSDK_OFFSET(0x9EB9900)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDOWNARROW_OFFSET UNITYSDK_OFFSET(0x9EB9B40)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF_OFFSET UNITYSDK_OFFSET(0x9EB9D90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSCROLLLOCK_OFFSET UNITYSDK_OFFSET(0x9EB9FE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTCTRL_OFFSET UNITYSDK_OFFSET(0x9EBA230)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF1_OFFSET UNITYSDK_OFFSET(0x9EBA490)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDL_OFFSET UNITYSDK_OFFSET(0x9EBA6E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEUP_OFFSET UNITYSDK_OFFSET(0x9EBA930)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTMETA_OFFSET UNITYSDK_OFFSET(0x9EBAB80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD9_OFFSET UNITYSDK_OFFSET(0x9EBADE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDI_OFFSET UNITYSDK_OFFSET(0x9EBB030)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDA_OFFSET UNITYSDK_OFFSET(0x9EBB280)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF9_OFFSET UNITYSDK_OFFSET(0x9EBB4D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDINSERT_OFFSET UNITYSDK_OFFSET(0x9EBB720)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDTAB_OFFSET UNITYSDK_OFFSET(0x9EBB970)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDY_OFFSET UNITYSDK_OFFSET(0x9EBBBC0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF7_OFFSET UNITYSDK_OFFSET(0x9EBBE10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDHOME_OFFSET UNITYSDK_OFFSET(0x9EBC060)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADDIVIDE_OFFSET UNITYSDK_OFFSET(0x9EBC2B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDELETE_OFFSET UNITYSDK_OFFSET(0x9EBC500)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM5_OFFSET UNITYSDK_OFFSET(0x9EBC750)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDESCAPE_OFFSET UNITYSDK_OFFSET(0x9EBC990)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPERIOD_OFFSET UNITYSDK_OFFSET(0x9EBCBE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM1_OFFSET UNITYSDK_OFFSET(0x9EBCE30)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTARROW_OFFSET UNITYSDK_OFFSET(0x9EBD070)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD7_OFFSET UNITYSDK_OFFSET(0x9EBD2C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF10_OFFSET UNITYSDK_OFFSET(0x9EBD510)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSHIFT_OFFSET UNITYSDK_OFFSET(0x9EBD760)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADENTER_OFFSET UNITYSDK_OFFSET(0x9EBD9E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTMETA_OFFSET UNITYSDK_OFFSET(0x9EBDC30)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDH_OFFSET UNITYSDK_OFFSET(0x9EBDE90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EBE0E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int FastKeyboard_TypeDefinitionIndex = 28496;

	class FastKeyboard : public Il2CppObject
	{
	public:
		::System::String* metadata; // 0x0

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM2(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM2_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad2(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD2_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardenter(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDENTER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardspace(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSPACE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumLock(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMLOCK_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlKeyboardIMESelected(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDIMESELECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardt(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad3(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD3_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardm(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpause(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardx(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboards(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf8(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF8_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard7(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD7_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardn(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM4(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM4_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf11(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF11_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightAlt(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTALT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::AnyKeyControl* Initialize_ctrlKeyboardanyKey(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::AnyKeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDANYKEY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardz(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDZ_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad1(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD1_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard1(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD1_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardsemicolon(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSEMICOLON_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightCtrl(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTCTRL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf3(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF3_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardr(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardd(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightBracket(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTBRACKET_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftAlt(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTALT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackquote(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKQUOTE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardalt(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDALT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftBracket(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTBRACKET_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardequals(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardslash(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSLASH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardg(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDG_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardq(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQ_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard0(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD0_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMultiply(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMULTIPLY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf5(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF5_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardb(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDB_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardc(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDC_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardupArrow(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDUPARROW_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEquals(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM3(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM3_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardprintScreen(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPRINTSCREEN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardj(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDJ_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad4(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD4_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcomma(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCOMMA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcontextMenu(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCONTEXTMENU_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardend(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEND_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad8(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD8_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardk(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDK_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardp(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardminus(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDMINUS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardquote(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQUOTE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardctrl(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCTRL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardperiod(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPERIOD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard8(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD8_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad0(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD0_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftArrow(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTARROW_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardv(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDV_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard6(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD6_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf4(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF4_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad5(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD5_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPlus(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPLUS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightShift(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTSHIFT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcapsLock(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCAPSLOCK_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackspace(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSPACE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMinus(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMINUS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarde(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf6(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF6_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftShift(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTSHIFT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackslash(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSLASH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard9(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD9_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard4(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD4_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardo(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDO_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad6(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD6_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardw(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDW_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardu(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDU_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard2(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD2_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf2(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF2_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard3(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD3_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf12(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF12_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageDown(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEDOWN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard5(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD5_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddownArrow(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDOWNARROW_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardscrollLock(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSCROLLLOCK_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftCtrl(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTCTRL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf1(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF1_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardl(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageUp(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEUP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightMeta(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTMETA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad9(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD9_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardi(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDI_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarda(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf9(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF9_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardinsert(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDINSERT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardtab(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDTAB_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardy(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf7(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF7_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardhome(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDHOME_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadDivide(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADDIVIDE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddelete(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDELETE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM5(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM5_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardescape(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDESCAPE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPeriod(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPERIOD_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM1(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM1_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightArrow(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTARROW_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad7(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD7_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf10(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF10_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardshift(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSHIFT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEnter(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADENTER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftMeta(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTMETA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardh(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::UnityEngine::InputSystem::Controls::KeyControl*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

