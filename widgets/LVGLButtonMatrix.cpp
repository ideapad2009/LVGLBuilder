#include "LVGLButtonMatrix.h"

#include <QIcon>

#include "LVGLObject.h"

LVGLButtonMatrix::LVGLButtonMatrix()
{

    m_editableStyles << LVGL::Body; // lv_btnmatrix_STYLE_BG
    m_editableStyles << LVGL::Body; // lv_btnmatrix_STYLE_BTN_REL
    m_editableStyles << LVGL::Body; // lv_btnmatrix_STYLE_BTN_PR
    m_editableStyles << LVGL::Body; // lv_btnmatrix_STYLE_BTN_TGL_REL
    m_editableStyles << LVGL::Body; // lv_btnmatrix_STYLE_BTN_TGL_PR
    m_editableStyles << LVGL::Body; // lv_btnmatrix_STYLE_BTN_INA
}

QString LVGLButtonMatrix::name() const
{
	return "Button Matrix";
}

QString LVGLButtonMatrix::className() const
{
    return "lv_btnmatrix";
}

LVGLWidget::Type LVGLButtonMatrix::type() const
{
	return ButtonMatrix;
}

QPixmap LVGLButtonMatrix::preview() const
{
	return QPixmap();
}

QIcon LVGLButtonMatrix::icon() const
{
	return QIcon();
}

lv_obj_t *LVGLButtonMatrix::newObject(lv_obj_t *parent) const
{
    lv_obj_t *obj = lv_btnmatrix_create(parent, nullptr);
	return obj;
}

QSize LVGLButtonMatrix::minimumSize() const
{
	return QSize(150, 100);
}

QStringList LVGLButtonMatrix::styles() const
{
    return QStringList() << "lv_btnmatrix_STYLE_BG"
                                << "lv_btnmatrix_STYLE_BTN_REL"
                                << "lv_btnmatrix_STYLE_BTN_PR"
                                << "lv_btnmatrix_STYLE_BTN_TGL_REL"
                                << "lv_btnmatrix_STYLE_BTN_TGL_PR"
                                << "lv_btnmatrix_STYLE_BTN_INA";
}

lv_style_t *LVGLButtonMatrix::style(lv_obj_t *obj, int type) const
{
//	return const_cast<lv_style_t*>(lv_btnmatrix_get_style(obj, type & 0xff));
    return nullptr;
}

void LVGLButtonMatrix::setStyle(lv_obj_t *obj, int type, lv_style_t *style) const
{
//	lv_btnmatrix_set_style(obj, static_cast<lv_btn_style_t>(type), style);
}

lv_style_t *LVGLButtonMatrix::defaultStyle(int type) const
{
/*	if (type == lv_btnmatrix_STYLE_BG)
		return &lv_style_pretty;
    else if (type == lv_btnmatrix_STYLE_BTN_REL)
		return &lv_style_btn_rel;
    else if (type == lv_btnmatrix_STYLE_BTN_PR)
		return &lv_style_btn_pr;
    else if (type == lv_btnmatrix_STYLE_BTN_TGL_REL)
		return &lv_style_btn_tgl_rel;
    else if (type == lv_btnmatrix_STYLE_BTN_TGL_PR)
		return &lv_style_btn_tgl_pr;
    else if (type == lv_btnmatrix_STYLE_BTN_INA)
        return &lv_style_btn_ina;*/
	return nullptr;
}
