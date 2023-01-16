/*******************************************************************************
 * @file Template.h
 * @date 2020-08-21
 * @author Adam Rustom (jbu@neocortec.com)
 *
 * @copyright Copyright (c) 2020
 *
 *******************************************************************************/

/** @file
 *
 * @defgroup Template Template
 * @{
 * @ingroup Domain
 *
 * @brief The <Template> is used for ...
 *
 * @details See @ref ABCMethodA for sequence diagrams illustrating the flow of
events
 *          when using the Scheduler.
 *
 * @section app_scheduler_req Requirements:
 *
 * @subsection main_context_logic Logic in main context:
 *
 *   - Define an event handler for each type of event expected.
 *   - Initialize the scheduler by calling the APP_SCHED_INIT() macro before
entering the
 *     application main loop.
 *   - Call app_sched_execute() from the main loop each time the application
wakes up because of an
 *     event (typically when sd_app_evt_wait() returns).
 *
 * @subsection int_context_logic Logic in interrupt context:
 *
 *   - In the interrupt handler, call app_sched_event_put()
 *     with the appropriate data and event handler. This will insert an event
into the
 *     scheduler's queue. The app_sched_execute() function will pull this event
and call its
 *     handler in the main context.
 *
 * @if (PERIPHERAL)
 * For an example usage of the scheduler, see the implementations of
 * @ref ble_sdk_app_hids_mouse and @ref ble_sdk_app_hids_keyboard.
 * @endif
 *
 * @image ./pictures/example.svg The high level design of the scheduler

# Level 1
### Level 3
@ref ABCMethodA

 */

#ifndef TEMPLATE_H
#define TEMPLATE_H

/*******************************************************************************
 *    Includes
 ******************************************************************************/

#include <stdint.h>

/*******************************************************************************
 *    Defines
 ******************************************************************************/

#define ABC (1)

/*******************************************************************************
 *    Type defines
 ******************************************************************************/

using Abc_t = struct
{
    uint16_t a1;
    uint16_t a2;
};

/*******************************************************************************
 *    External
 ******************************************************************************/

/*******************************************************************************
 *    Function prototypes
 ******************************************************************************/

/**
 * @brief Template demo function
 *
 * @param abc   is a structure ...
 * @param a     is just a simple integer ...
 */
int ABCMethodA(Abc_t abc, int a);

/*******************************************************************************
 *    Class prototypes
 ******************************************************************************/

#ifdef __cplusplus

/**
 * @brief Class Abc
 *
 */
class Abc
{

  public:
    /**
     * @brief Construct a new Abc object
     *
     */
    Abc();

    /**
     * @brief Destroy the Abc object
     *
     */
    virtual ~Abc();

    /**
     * @brief
     *
     * @param abc
     * @param a
     * @return int
     */
    int method_a(Abc_t abc, int a);

    /**
     * @brief
     *
     * @param abc
     * @param a
     * @return int
     */
    int method_b(Abc_t abc, int a);

  protected:
  private:
};

#endif

/*******************************************************************************/
/** @} addtogroup end */

#endif // TEMPLATE_H
