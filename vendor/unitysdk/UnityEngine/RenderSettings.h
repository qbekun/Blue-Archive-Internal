#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FogMode; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class AmbientMode; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class SphericalHarmonicsL2; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine::Rendering { class DefaultReflectionMode; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Color&; }
namespace UnityEngine::Rendering { class SphericalHarmonicsL2&; }

#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYBOXAMOUNT_OFFSET UNITYSDK_OFFSET(0xA1FA310)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYBOXAMOUNT_OFFSET UNITYSDK_OFFSET(0xA1FA390)
#define UNITYENGINE_RENDERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1FA430)
#define UNITYENGINE_RENDERSETTINGS_GET_FOG_OFFSET UNITYSDK_OFFSET(0xA1FA480)
#define UNITYENGINE_RENDERSETTINGS_SET_FOG_OFFSET UNITYSDK_OFFSET(0xA1FA4C0)
#define UNITYENGINE_RENDERSETTINGS_GET_FOGSTARTDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1FA500)
#define UNITYENGINE_RENDERSETTINGS_SET_FOGSTARTDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1FA540)
#define UNITYENGINE_RENDERSETTINGS_GET_FOGENDDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1FA590)
#define UNITYENGINE_RENDERSETTINGS_SET_FOGENDDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1FA5D0)
#define UNITYENGINE_RENDERSETTINGS_GET_FOGMODE_OFFSET UNITYSDK_OFFSET(0xA1FA620)
#define UNITYENGINE_RENDERSETTINGS_SET_FOGMODE_OFFSET UNITYSDK_OFFSET(0xA1FA660)
#define UNITYENGINE_RENDERSETTINGS_GET_FOGCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FA6A0)
#define UNITYENGINE_RENDERSETTINGS_SET_FOGCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FA730)
#define UNITYENGINE_RENDERSETTINGS_GET_FOGDENSITY_OFFSET UNITYSDK_OFFSET(0xA1FA7B0)
#define UNITYENGINE_RENDERSETTINGS_SET_FOGDENSITY_OFFSET UNITYSDK_OFFSET(0xA1FA7F0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTMODE_OFFSET UNITYSDK_OFFSET(0xA1FA840)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTMODE_OFFSET UNITYSDK_OFFSET(0xA1FA880)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FA8C0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FA950)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FA9D0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FAA60)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FAAE0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FAB70)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTINTENSITY_OFFSET UNITYSDK_OFFSET(0xA1FA350)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTINTENSITY_OFFSET UNITYSDK_OFFSET(0xA1FA3E0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTLIGHT_OFFSET UNITYSDK_OFFSET(0xA1FABF0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_OFFSET UNITYSDK_OFFSET(0xA1FAC80)
#define UNITYENGINE_RENDERSETTINGS_GET_SUBTRACTIVESHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FAD00)
#define UNITYENGINE_RENDERSETTINGS_SET_SUBTRACTIVESHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xA1FAD90)
#define UNITYENGINE_RENDERSETTINGS_GET_SKYBOX_OFFSET UNITYSDK_OFFSET(0xA1FAE10)
#define UNITYENGINE_RENDERSETTINGS_SET_SKYBOX_OFFSET UNITYSDK_OFFSET(0xA1FAE50)
#define UNITYENGINE_RENDERSETTINGS_GET_SUN_OFFSET UNITYSDK_OFFSET(0xA1FAE90)
#define UNITYENGINE_RENDERSETTINGS_SET_SUN_OFFSET UNITYSDK_OFFSET(0xA1FAED0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_OFFSET UNITYSDK_OFFSET(0xA1FAF10)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_OFFSET UNITYSDK_OFFSET(0xA1FB000)
#define UNITYENGINE_RENDERSETTINGS_GET_CUSTOMREFLECTION_OFFSET UNITYSDK_OFFSET(0xA1FB080)
#define UNITYENGINE_RENDERSETTINGS_SET_CUSTOMREFLECTION_OFFSET UNITYSDK_OFFSET(0xA1FB0C0)
#define UNITYENGINE_RENDERSETTINGS_GET_REFLECTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xA1FB100)
#define UNITYENGINE_RENDERSETTINGS_SET_REFLECTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xA1FB140)
#define UNITYENGINE_RENDERSETTINGS_GET_REFLECTIONBOUNCES_OFFSET UNITYSDK_OFFSET(0xA1FB190)
#define UNITYENGINE_RENDERSETTINGS_SET_REFLECTIONBOUNCES_OFFSET UNITYSDK_OFFSET(0xA1FB1D0)
#define UNITYENGINE_RENDERSETTINGS_GET_DEFAULTREFLECTION_OFFSET UNITYSDK_OFFSET(0xA1FB210)
#define UNITYENGINE_RENDERSETTINGS_GET_DEFAULTREFLECTIONMODE_OFFSET UNITYSDK_OFFSET(0xA1FB250)
#define UNITYENGINE_RENDERSETTINGS_SET_DEFAULTREFLECTIONMODE_OFFSET UNITYSDK_OFFSET(0xA1FB290)
#define UNITYENGINE_RENDERSETTINGS_GET_DEFAULTREFLECTIONRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA1FB2D0)
#define UNITYENGINE_RENDERSETTINGS_SET_DEFAULTREFLECTIONRESOLUTION_OFFSET UNITYSDK_OFFSET(0xA1FB310)
#define UNITYENGINE_RENDERSETTINGS_GET_HALOSTRENGTH_OFFSET UNITYSDK_OFFSET(0xA1FB350)
#define UNITYENGINE_RENDERSETTINGS_SET_HALOSTRENGTH_OFFSET UNITYSDK_OFFSET(0xA1FB390)
#define UNITYENGINE_RENDERSETTINGS_GET_FLARESTRENGTH_OFFSET UNITYSDK_OFFSET(0xA1FB3E0)
#define UNITYENGINE_RENDERSETTINGS_SET_FLARESTRENGTH_OFFSET UNITYSDK_OFFSET(0xA1FB420)
#define UNITYENGINE_RENDERSETTINGS_GET_FLAREFADESPEED_OFFSET UNITYSDK_OFFSET(0xA1FB470)
#define UNITYENGINE_RENDERSETTINGS_SET_FLAREFADESPEED_OFFSET UNITYSDK_OFFSET(0xA1FB4B0)
#define UNITYENGINE_RENDERSETTINGS_GETRENDERSETTINGS_OFFSET UNITYSDK_OFFSET(0xA1FB500)
#define UNITYENGINE_RENDERSETTINGS_RESET_OFFSET UNITYSDK_OFFSET(0xA1FB540)
#define UNITYENGINE_RENDERSETTINGS_GET_FOGCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FA6F0)
#define UNITYENGINE_RENDERSETTINGS_SET_FOGCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FA770)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FA910)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FA990)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FAA20)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FAAA0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FAB30)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FABB0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTLIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FAC40)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FACC0)
#define UNITYENGINE_RENDERSETTINGS_GET_SUBTRACTIVESHADOWCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FAD50)
#define UNITYENGINE_RENDERSETTINGS_SET_SUBTRACTIVESHADOWCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FADD0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FAFC0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1FB040)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderSettings_TypeDefinitionIndex = 31012;

	class RenderSettings : public Il2CppObject
	{
	public:
		::System::Single get_ambientSkyboxAmount()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYBOXAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ambientSkyboxAmount(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYBOXAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_fog()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FOG_OFFSET))(nullptr);
		}

		::System::Void set_fog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FOG_OFFSET))(arg, nullptr);
		}

		::System::Single get_fogStartDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FOGSTARTDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_fogStartDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FOGSTARTDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single get_fogEndDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FOGENDDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_fogEndDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FOGENDDISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::FogMode* get_fogMode()
		{
			return (return (::UnityEngine::FogMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FOGMODE_OFFSET))(nullptr);
		}

		::System::Void set_fogMode(::UnityEngine::FogMode* arg)
		{
			((::System::Void(*)(::UnityEngine::FogMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FOGMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_fogColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FOGCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_fogColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FOGCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_fogDensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FOGDENSITY_OFFSET))(nullptr);
		}

		::System::Void set_fogDensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FOGDENSITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::AmbientMode* get_ambientMode()
		{
			return (return (::UnityEngine::Rendering::AmbientMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTMODE_OFFSET))(nullptr);
		}

		::System::Void set_ambientMode(::UnityEngine::Rendering::AmbientMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::AmbientMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ambientSkyColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_ambientSkyColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ambientEquatorColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_ambientEquatorColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ambientGroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_ambientGroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_ambientIntensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTINTENSITY_OFFSET))(nullptr);
		}

		::System::Void set_ambientIntensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTINTENSITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ambientLight()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTLIGHT_OFFSET))(nullptr);
		}

		::System::Void set_ambientLight(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_subtractiveShadowColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_SUBTRACTIVESHADOWCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_subtractiveShadowColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_SUBTRACTIVESHADOWCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_skybox()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_SKYBOX_OFFSET))(nullptr);
		}

		::System::Void set_skybox(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_SKYBOX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Light* get_sun()
		{
			return (return (::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_SUN_OFFSET))(nullptr);
		}

		::System::Void set_sun(::UnityEngine::Light* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_SUN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::SphericalHarmonicsL2* get_ambientProbe()
		{
			return (return (::UnityEngine::Rendering::SphericalHarmonicsL2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_OFFSET))(nullptr);
		}

		::System::Void set_ambientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_customReflection()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_CUSTOMREFLECTION_OFFSET))(nullptr);
		}

		::System::Void set_customReflection(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_CUSTOMREFLECTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_reflectionIntensity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_REFLECTIONINTENSITY_OFFSET))(nullptr);
		}

		::System::Void set_reflectionIntensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_REFLECTIONINTENSITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_reflectionBounces()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_REFLECTIONBOUNCES_OFFSET))(nullptr);
		}

		::System::Void set_reflectionBounces(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_REFLECTIONBOUNCES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Cubemap* get_defaultReflection()
		{
			return (return (::UnityEngine::Cubemap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_DEFAULTREFLECTION_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::DefaultReflectionMode* get_defaultReflectionMode()
		{
			return (return (::UnityEngine::Rendering::DefaultReflectionMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_DEFAULTREFLECTIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_defaultReflectionMode(::UnityEngine::Rendering::DefaultReflectionMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::DefaultReflectionMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_DEFAULTREFLECTIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_defaultReflectionResolution()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_DEFAULTREFLECTIONRESOLUTION_OFFSET))(nullptr);
		}

		::System::Void set_defaultReflectionResolution(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_DEFAULTREFLECTIONRESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_haloStrength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_HALOSTRENGTH_OFFSET))(nullptr);
		}

		::System::Void set_haloStrength(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_HALOSTRENGTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_flareStrength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FLARESTRENGTH_OFFSET))(nullptr);
		}

		::System::Void set_flareStrength(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FLARESTRENGTH_OFFSET))(arg, nullptr);
		}

		::System::Single get_flareFadeSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FLAREFADESPEED_OFFSET))(nullptr);
		}

		::System::Void set_flareFadeSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FLAREFADESPEED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* GetRenderSettings()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GETRENDERSETTINGS_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_RESET_OFFSET))(nullptr);
		}

		::System::Void get_fogColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_FOGCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_fogColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_FOGCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_ambientSkyColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ambientSkyColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_ambientEquatorColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ambientEquatorColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_ambientGroundColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ambientGroundColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_ambientLight_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTLIGHT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ambientLight_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_subtractiveShadowColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_SUBTRACTIVESHADOWCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_subtractiveShadowColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_SUBTRACTIVESHADOWCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_ambientProbe_Injected(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ambientProbe_Injected(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

